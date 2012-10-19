/**
 * Copyright (c) 2012, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 * \file TestSwap.cpp
 *
 * Created on 2010-04-29 by Lars Bilke
 */

// ** INCLUDES **
#include "gtest.h"

#include "swap.h"

TEST(BaseLib, SwapInt) {
	int arg0 = 5;
	int arg1 = 10;
	BaseLib::swap(arg0, arg1);
	ASSERT_EQ ( arg0, 10 );
	ASSERT_EQ ( arg1, 5 );
}

TEST(BaseLib, SwapDouble) {
	double arg0 = 5.0;
	double arg1 = 10.0;
	BaseLib::swap(arg0, arg1);
	ASSERT_EQ ( arg0, 10.0 );
	ASSERT_EQ ( arg1, 5.0 );
}

TEST(BaseLib, SwapString) {
	std::string arg0 = "5";
	std::string arg1 = "10";
	BaseLib::swap(arg0, arg1);
	ASSERT_EQ ( arg0, std::string("10") );
	ASSERT_EQ ( arg1, std::string("5") );
}
