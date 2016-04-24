#pragma once
class TMonom
{
	double k;//коэффициент
	int abc;//свертка показатеей степени 
	TMonom *next;
	int osn;
public:
	TMonom(double,int);
	TMonom(double,int,int,int);
	~TMonom(void);
	TMonom (TMonom &x);
	friend class TPolinom;
	TMonom *GetNext(void);
	double GetCoeff(void);
	int GetABC(void);
	int GetA(void);
	int GetB(void);
	int GetC(void);
	int ConvertTo_abc(int,int,int);
};

