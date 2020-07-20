#include "base.h"

void base::exchange(int p, int q)//���
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

	return;//Ҫд
}

bool base::isSorted()
{
	for (int i = 0; i < array_length - 1; ++i)//ע��ȽϿ���Խ��
		if (array_ptr[i] > array_ptr[i + 1]) //ע��д��
			return false;
	return true;
}


void base::show()
{
	for (int i = 0; i < array_length; ++i)
		std::cout << array_ptr[i] << std::endl;
}