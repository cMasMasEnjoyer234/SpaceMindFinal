#pragma once

using namespace System;
#include <iostream>




public ref class User {
public:
	static Int32^ id;
	static String^ res;
	static String^ fecha;
	static String^ nivel;

	// ---------------
	User(int id_);
	static void set_res(String^ res_);
	static bool limit_windows = true;
};


/*
public ref class utils {
public:
	std::string day();
};
*/


