#pragma once
#include "base.h"

class shellSort :public base
{
public:
	explicit shellSort(int l, int* p) :base(l, p) {}

	void shell_sort();
};