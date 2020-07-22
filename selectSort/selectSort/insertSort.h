#ifndef INSERTSORF_H
#define INSERTSORT_H
#include "base.h"

class insertSort :public base
{
public:
	explicit insertSort(int l, int* p) :base(l, p) {}

	void insert_sort();

};


#endif // !INSERTSORF_H
