#include "insertSort.h"

void insertSort::insert_sort()
{
	for (int i = 0; i < array_length; ++i)
	{
		for (int j = i; j > 0 && (array_ptr[j] < array_ptr[j - 1]); --j) //¹Ø¼ü
			exchange(j, j - 1);
	}
}