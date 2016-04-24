#include "gtest/gtest.h"

#include "TMonom.h"


TEST (Monom, can_create_monom_with_pozitive_coefficient)
{
	ASSERT_NO_THROW(TMonom m(10,429));
}

TEST (Monom, can_create_copied_monom)
{
	TMonom m1(10, 123);
	ASSERT_NO_THROW(TMonom m2(m1));
}

TEST (Monom, can_create_with_negative_coefficient)
{
	ASSERT_NO_THROW(TMonom m(-14,123));
}

TEST (Monom, can_create_monom_with_negative_power)
{
	ASSERT_NO_THROW(TMonom m(10,-1,-2,-5));
}

TEST (Monom, can_create_monom_with_power_less_20)
{
	ASSERT_NO_THROW(TMonom m(15,5,15,19));
}

TEST (Monom, can_get_A_B_C_apart_with_power_less_20)
{
	TMonom m1 (15,19,14,10);
	EXPECT_EQ(m1.GetA(),19);
	EXPECT_EQ(m1.GetB(),14);
	EXPECT_EQ(m1.GetC(),10);
}

TEST (Monom, cant_create_monom_with_power_more_19)
{
	ASSERT_ANY_THROW(TMonom m (15,25,20,40));
}

TEST (Monom, can_get_ABC)
{
	TMonom m (12,521);
	EXPECT_EQ(m.GetABC(),521);
}

TEST (Monom, can_get_coefficient)
{
	TMonom m (24,123);
	EXPECT_EQ(m.GetCoeff(),24);
}







