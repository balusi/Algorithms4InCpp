#include "selectSort.h"

void selectSort::sel_sort()
{//����iС��Ԫ�ط����ڵ�[i]��λ��

	for (int i = 0; i < array_length; ++i)
	{
		int min = i; //ʣ�µ�����С��ʼ��Ϊ��һ��
		for (int j = i + 1; j < array_length; ++j)
		{
			if (array_ptr[j] < array_ptr[min]) min = j;
		}
		exchange(min, i);
	}
}