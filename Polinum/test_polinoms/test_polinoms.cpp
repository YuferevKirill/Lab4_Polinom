#include "gtest/gtest.h"

#include "TPolinom.h"

TEST (Polinom, can_create_empty_polinom)
{
	ASSERT_NO_THROW(TPolinom p);
}

TEST (Polinom, can_create_two_polinoms)
{
	ASSERT_NO_THROW(TPolinom p);
	ASSERT_NO_THROW(TPolinom p1);
}

TEST (Polinom, can_add_monom_to_polinom)
{
	TPolinom P;
	ASSERT_NO_THROW(P.add(new TMonom(10,1,2,5)));
}

TEST (Polinom, can_add_polinoms)// done
{
	TPolinom P1,P2,res;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(25,1,2,5));
	ASSERT_NO_THROW (res=P1.add(P2));
	TPolinom etalon;
	etalon.add(new TMonom(35,1,2,5));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_sub_polinom1_from_polinom2)// done
{
	TPolinom P1,P2,res;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(5,1,2,5));
	ASSERT_NO_THROW (res=P2.sub(P1));
	TPolinom etalon;
	etalon.add(new TMonom(-5,1,2,5));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_sub_polinom2_from_polinom1)// done
{
	TPolinom P1,P2,res;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(5,1,2,5));
	ASSERT_NO_THROW (res=P1.sub(P2));
	TPolinom etalon;
	etalon.add(new TMonom(5,1,2,5));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_umn_polinom_to_const)// done
{
	TPolinom P1,res;
	P1.add(new TMonom(10,1,18,5));
	ASSERT_NO_THROW(res=P1.umn(5));
	TPolinom etalon;
	etalon.add(new TMonom(50,1,18,5));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_umn_to_0)// done
{
	TPolinom P1,res;
	P1.add(new TMonom(10,1,18,5));
	ASSERT_NO_THROW(res=P1.umn(0));
	TPolinom etalon;
	etalon.add(new TMonom(0,0));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_umn_to_negative_const) // done
{	
	TPolinom P1,res;
	P1.add(new TMonom(10,1,18,5));
	ASSERT_NO_THROW(res=P1.umn(-5));
	TPolinom etalon;
	etalon.add(new TMonom(-50,1,18,5));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_umn_polinom1_to_polinom2)// done
{
	TPolinom P1,P2,res;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(10,1,2,5));
	res=P1.umn(P2);
	TPolinom etalon;
	etalon.add(new TMonom(100,2,4,10));
	EXPECT_TRUE(res.IsEqual(etalon));
}

TEST (Polinom, can_assigned_polinom2_to_polinom1)// done
{
	TPolinom P1,P2,res;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(5,2,5,9));
	ASSERT_NO_THROW(res=P1=P2);
	EXPECT_TRUE(res.IsEqual(P2));
}

TEST (Polinom, can_assigned_equivalent_polinoms)
{
	TPolinom P1,P2;
	P1.add(new TMonom(10,1,2,5));
	P2.add(new TMonom(10,1,2,5));
	ASSERT_NO_THROW(P1=P2);
}


TEST (Polinom, can_copied_polinoms)
{
	TPolinom P1;
	P1.add(new TMonom(10,1,2,5));
	ASSERT_NO_THROW(TPolinom P2(P1));
}

TEST (Polinom, can_add_more_one_monoms_at_head_or_tail_or_midle)
{
	TPolinom P;
	ASSERT_NO_THROW(P.add(new TMonom(10,5,2,5)));
	ASSERT_NO_THROW(P.add(new TMonom(10,1,2,5)));
	ASSERT_NO_THROW(P.add(new TMonom(10,9,2,5)));
}











