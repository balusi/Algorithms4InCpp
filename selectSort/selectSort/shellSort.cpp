#include "shellSort.h"

void shellSort::shell_sort()
{
	int h = 1; //间隔
	while (h < array_length / 3) h = 3 * h + 1;
	while (h>=1)
	{//将array_ptr[i]插入到array_ptr[i-h]，array_ptr[i-2*h]，array_ptr[i-3*h]...中
		for (int i = h; i < array_length; ++i)
			for (int j = i; j >= h && array_ptr[j] < array_ptr[j - h]; j -= h)
			{
				exchange(j, j - h);
				for (int i=0; i < array_length; ++i)
					std::cout << array_ptr[i] << " " ;
				std::cout<<std::endl;
			}
		h = h / 3;
	}
}