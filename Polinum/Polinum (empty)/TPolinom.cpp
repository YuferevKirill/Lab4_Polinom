#include <stdio.h>
#include <iostream>
#include "TPolinom.h"
using namespace std;


TPolinom::TPolinom(void)
{
	head=0;
	num=0;
	hvost=0;
}


TPolinom::~TPolinom(void)
{
	TMonom *p=head;
	for (int i=0;i<num;i++)
	{
		TMonom *del=p;
		p=p->next;
		delete del;
	}
}

TPolinom::TPolinom(TPolinom &x)
{
	head=0;
	num=0;
	hvost=0;

	TMonom *cur=x.head;
	for (int i=0;i<x.num;i++)
	{
		add(new TMonom(*cur));
		cur=cur->next;
	}
}

TPolinom& TPolinom::operator=(TPolinom &x)
{
	if (this==&x)
		return *this;

	TMonom *p=head;
	for (int i=0;i<num;i++)
	{
		TMonom *del=p;
		p=p->next;
		delete del;
	}

	head=0;
	num=0;
	hvost=0;

	TMonom *cur=x.head;
	for (int i=0;i<x.num;i++)
	{
		add(new TMonom(*cur));
		cur=cur->next;
	}

	return *this;
}


void TPolinom::Input()
{
	printf ("input polinom:\n");
	while (true)
	{
		double k;
		int a,b,c;
		cout<<"k= ";
		cin>>k;
		cout<<"abc= ";
		cin>>a;
		cin>>b;
		cin>>c;
		TMonom *M=new TMonom(k,a,b,c);
		add(M);
		cout<<"More? 1 or 0 = ";
		cin>>k;
		if (k==0)
			break;	
	}
}

void TPolinom::add(TMonom *M)
{
	bool flag=false;// ���� �������� ������ ������ 
	if (head==0)
	{
		//M->prev=M->next; // ���������� �������� ����� �����������
		M->next=M;
		head=M;
		hvost=M;
	}
	else
	{
		TMonom *cur=head;
		TMonom *prev=hvost;
		int i;
		for (i=0;i<num;i++)
		{
			if ( cur->abc < M->abc)//������� � ��������
			{
				M->next=cur;
				prev->next=M;
				if (cur==head)
				{
					head=M; //���������� � ������
				}
				break;
			}
			if (cur->abc == M->abc)
			{
				cur->k = cur->k + M->k;
				delete M;
				//num--; //������� ���������, �.�. ������ ���������, ������� �, ����� �� ����� ������, num--;
				flag=true;
				break;
			}
			prev=cur;
			cur=cur->next;
		}
		if (i==num)//���������� � ����� 
		{
			hvost->next=M;
			M->next=head;
			hvost=M;
		}
	}
	if (flag==false)
		num++;
}

void TPolinom::Output()
{
	TMonom *cur=head;
	if (num==0)
		cout<<"polinom is empty"<<endl;
	for (int i=0;i<num;i++)
	{
		cout<<"k="<<cur->k<<" abc="<<cur->abc;
		cout<<" (a="<<cur->GetA()<<",b="<<cur->GetB()<<",c="<<cur->GetC()<<")"<<endl;
		cur=cur->next;
	}
}

TPolinom TPolinom::add(TPolinom &x)
{
	TPolinom sum;

	int i1=0,i2=0;
	TMonom *cur1=head,*cur2=x.head;
	while (i1<num)
	{
		if (cur1->abc > cur2->abc) //����� ����� �� ������� ������
		{
			sum.add(new TMonom(cur1->k,cur1->abc));
			i1++;
			cur1=cur1->next;
		}
		else if (cur1->abc == cur2->abc) //���������� ������ � ����������� ���������
		{
			sum.add(new TMonom(cur1->k+cur2->k,cur1->abc));
			i1++;
			cur1=cur1->next;
			i2++;
			cur2=cur2->next;
		}
		else // ����� ����� �� ������� ������
		{
			sum.add(new TMonom(cur2->k,cur2->abc)); 
			i2++;
			cur2=cur2->next;
		}
	}
	// ���� ������� �����, �������� ���
	while (i2<x.num)
	{
		sum.add(new TMonom(cur2->k,cur2->abc)); 
		i2++;
		cur2=cur2->next;
	}

	sum.DelZeroK();
	return sum;

}

TPolinom TPolinom::sub(TPolinom &x)
{
	TPolinom sub;

	int i1=0,i2=0;
	TMonom *cur1=head,*cur2=x.head;
	while (i1<num)
	{
		if (cur1->abc > cur2->abc) //����� ����� �� ������� ������
		{
			sub.add(new TMonom(cur1->k,cur1->abc));
			i1++;
			cur1=cur1->next;
		}
		else if (cur1->abc == cur2->abc) //�������� ������ � ����������� ���������
		{
			sub.add(new TMonom(cur1->k-cur2->k,cur1->abc));
			i1++;
			cur1=cur1->next;
			i2++;
			cur2=cur2->next;
		}
		else // ����� ����� �� ������� ������
		{
			sub.add(new TMonom(-cur2->k,cur2->abc)); 
			i2++;
			cur2=cur2->next;
		}
	}
	// ���� ������� �����, �������� ���
	while (i2<x.num)
	{
		sub.add(new TMonom(cur2->k,cur2->abc)); 
		i2++;
		cur2=cur2->next;
	}
	DelZeroK();
	return sub;
}

TPolinom TPolinom::umn(TPolinom &x)
{
	TPolinom umn;

	TMonom *cur1=head;

	for(int i=0;i<num;i++)
	{
		TMonom *cur2=x.head;
		for (int j=0;j<x.num;j++)
		{
			umn.add(new TMonom(cur1->k*cur2->k,cur1->abc+cur2->abc));
			cur2=cur2->next;
		}
		cur1=cur1->next;
	}
	DelZeroK();
	return umn;
}

TPolinom TPolinom::umn(int x)
{
	TPolinom result(*this);
	TMonom *cur=result.head;

	if(x==0)
	{
		for (int i=0;i<num;i++)
		{
			cur->k=cur->k*0;
			cur->abc=cur->abc*0;
			cur=cur->next;
		}
	}
	else

	for (int i=0;i<num;i++)
	{
		cur->k=cur->k*x;
		cur=cur->next;
	}
	DelZeroK();
	return result;
}

int TPolinom::GetFirstCoef(void)
{
	TMonom *first=head;
	return first->k;
}

bool TPolinom::IsEqual(TPolinom &p2)
{
	TMonom *cur1=head;
	TMonom *cur2=p2.head;
	if (num!=p2.num)
		return false;

	for(int i=0;i<num;i++)
	{
		if (cur1->k!=cur2->k)
			return false;
		if (cur1->abc!=cur2->abc)
			return false;
		cur1=cur1->next;
		cur2=cur2->next;
	}
	return true;
}

void TPolinom::DelZeroK(void)
{
	while (num>0 && head->k==0 && head!=0)
	{
		TMonom *cur=head;
		head=head->next;
		if(head!=hvost)
		{
			hvost->next=head;
		}
		else 
		{
			hvost=0;
			head=0;
			//break;
		}
		delete cur;
		num--;
	}
}

TMonom* TPolinom::GetFirst(void)
{
	if (head!=0)
	{
		tek=head->next;
	}
	return head;
}


TMonom* TPolinom::GetNext(void)
{
	TMonom *tmp = tek;
	if (tek!=head)
	{
		tek=tek->next;
	}
	else
		return 0;
	return tmp;
}

void TPolinom::DelLastMonom(void)
{
	if (head==hvost)
	{
		delete hvost;
		head=0;
		hvost=0;
	}
	else
	{
		TMonom *cur=head;
		while (cur->next!=hvost)
		{
			cur=cur->next;
		}
		cur->next=head;
		delete hvost;
		hvost=cur;
	}
	num--;
}