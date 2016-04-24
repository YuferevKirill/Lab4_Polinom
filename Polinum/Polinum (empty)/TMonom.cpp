#include <stdio.h>
#include "TMonom.h"

TMonom::TMonom(double k,int abc)
{
	this->k=k;
	this->abc=abc;
	next=0;
	osn=40; 
}

TMonom::TMonom(double k,int a,int b,int c)
{
	if((a>30400)||(b>760)||c>19)
		throw "error!";
	osn=40;
	this->k=k;
	this->abc=a*osn*osn+b*osn+c;
	next=0;
}


TMonom::TMonom(TMonom &x)
{
	this->k=x.k;
	this->abc=x.abc;
	next=0;
	osn=40;
}


TMonom::~TMonom(void)
{

}

TMonom * TMonom::GetNext(void)
{
	if (next==NULL)
		throw "error!";
	return next;
}

double TMonom::GetCoeff(void)
{
	return k;
}

int TMonom::GetABC(void)
{
	return abc;
}

int TMonom::GetA(void)
{
	return abc/osn/osn;
}

int TMonom::GetB(void)
{
	return abc/osn%osn;
}

int TMonom::GetC(void)
{
	return abc%osn;
}

int TMonom::ConvertTo_abc(int a,int b,int c)
{
	int abc=a*800+b*40+c;
	return abc;
}
