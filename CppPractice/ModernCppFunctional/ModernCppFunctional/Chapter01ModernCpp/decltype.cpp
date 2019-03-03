﻿#include "pch.h"

#include "decltype.h"
#include "../Common/util.h"

int func1();
const int& func2();

struct struct_x { double d;  };

void decl_type_practice()
{
	print_title("DeclType");

	std::cout << "result of add : " << add(3, 5) << std::endl;

	const auto i = 0;
	const struct_x* x = new struct_x();

	decltype(func1) f1;
	decltype(func2) f2;
	// decl type(i) i1 = i;
	[[maybe_unused]] const auto i1 = i;
	
	const decltype(x->d) d1 = 0;
	// decl type((struct_x->d)) d2 = d1;
	[[maybe_unused]] const auto& d2 = d1;

	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;
	
	delete x;
}

int func1()
{
	return 0;
}

const int & func2()
{
	return std::forward<int&&>(0);
}