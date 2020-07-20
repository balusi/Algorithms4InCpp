#include "base.h"

void base::exchange(int p, int q)//序号
{
	if (p > array_length || q > array_length)
	{
		std::cout << "Array is Out of Range." << std::endl;
		return;
	}

	if (array_ptr[p] == array_ptr[q])
		return;

	int temp = array_ptr[p];
	array_ptr[p] = array_ptr[q];
	array_ptr[q] = temp;

	return;//要写
}

bool base::isSorted()
{
	for (int i = 0; i < array_length - 1; ++i)//注意比较可能越界
		if (array_ptr[i] > array_ptr[i + 1]) //注意写法
			return false;
	return true;
}


void base::show()
{
	for (int i = 0; i < array_length; ++i)
		std::cout << array_ptr[i] << std::endl;
}