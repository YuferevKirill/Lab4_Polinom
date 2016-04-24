#include <stdio.h>
#include "TPolinom.h"

//TODO
//1) Деструктор полинома
//2) адд ф-ия. Складыватть одинаковые,если есть.
//3) упорядочиввание по степеням

int main()
{
	TPolinom P;
	P.Input();
	//P.add(new TMonom(10,-1,-2,-5));
	P.Output();
	TPolinom P2;
	P2.Input();
	P2.Output();

	TPolinom P3=P.add(P2);
	P3.Output();
	return 0;
}