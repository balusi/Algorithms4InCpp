//#pragma once

#ifndef SELECTSORT_H
#define SELECTSORT_H

#include "base.h"


class selectSort : public base
{
public:
	explicit selectSort(int n, int* array) :base(n, array) {}

	void sel_sort();

};

#endif // !SELECTSORT_H




