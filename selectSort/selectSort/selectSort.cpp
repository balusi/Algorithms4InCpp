#include "selectSort.h"

void selectSort::sel_sort()
{//将第i小的元素放置于第[i]个位置

	for (int i = 0; i < array_length; ++i)
	{
		int min = i; //剩下当中最小初始化为第一个
		for (int j = i + 1; j < array_length; ++j)
		{
			if (array_ptr[j] < array_ptr[min]) min = j;
		}
		exchange(min, i);
	}
}