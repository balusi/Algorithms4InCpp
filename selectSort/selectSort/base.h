#pragma once
#include <iostream>

class base
{
public:
	base(int n, int* array) :array_length(n), array_ptr(array) {}

	void exchange(int p, int q);

	bool isSorted();

	void show();

protected:  //子类要能访问到
	int array_length;
	int* array_ptr; //指向数组的指针
};
#pragma once
