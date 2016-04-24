#pragma once
#include "TMonom.h"

class TPolinom
{
	TMonom *head;// голова кольцевого списка
	TMonom *hvost;// хвост
	int num;//кол-во эллементов в списке
	TMonom *tek;
public:
	TPolinom(void);
	~TPolinom(void);
	TPolinom (TPolinom &x);
	TPolinom& operator=(TPolinom &x);
	void Input();
	void add(TMonom *M);
	void Output();
	TPolinom add(TPolinom &x);
	TPolinom sub(TPolinom &x);
	TPolinom umn(TPolinom &x);
	TPolinom umn(int x);
	int GetFirstCoef(void);
	bool IsEqual(TPolinom &p2);
	void DelZeroK(void);
	TMonom *GetFirst(void);
	TMonom *GetNext(void);
	void DelLastMonom(void);
};

