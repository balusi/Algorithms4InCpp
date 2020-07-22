#include "mergeSort.h"

void mergeSort::Merge(int lo, int mid, int hi)
{
	int i = lo; //控制左半边
	int j = mid + 1; //控制右半边

	//一个临时保存数组的变量,这里有问题，数组越界。很难察觉。
	//有一种做法是声明一个跟原来数组一样长的数组变量作为类的成员，这样每次访问临时数组的时候就不会错。
	//数组是类的成员，保证了数组不会越界
	//这一步不能缺少，因为每次归并之后数组是局部排好序的，如果不复制过去，每次都会归并原来还没有排序的数组。
	for (int k = lo; k <= hi; ++k)
	{//将原数组复制一份
		temp_array[k] = array_ptr[k];
	}

	//k不能从0开始
	for (int k = lo; k <= hi; ++k)
	{
		if (i > mid)								array_ptr[k] = temp_array[j++];//左半边用尽，取右边元素
		else if (j > hi)							array_ptr[k] = temp_array[i++];//右半边用尽，取左边元素
		else if (temp_array[i] > temp_array[j])		array_ptr[k] = temp_array[j++];//左边元素大于右边，取右
		else										array_ptr[k] = temp_array[i++];//左边元素小于右边，取左
	}

}


void mergeSort::Top2Down_merge_sort(int lo,  int hi)
{//判断递归结束
	if (lo >= hi)
		return;

	int mid = lo + (hi - lo) / 2;
	Top2Down_merge_sort(lo, mid); //左半边排序
	Top2Down_merge_sort(mid + 1, hi); //右半边排序
	Merge(lo, mid, hi);  //归并结果
}

void mergeSort::Down2Top_merge_sort(int lo, int hi)
{//进行lgN次两两归并
//从两两合并开始，一直循环到最大的两个子数组合并，这里的关键是合并的两个子数组的大小sz,每次大小都翻倍
	
	for (int sz = 1; sz < array_length; sz = 2 * sz)
		//低索引值不能大于arrar_length-sz，否则越界
		for (int lo = 0; lo < array_length - sz; lo += 2 * sz)
			Merge(lo, lo + sz - 1, ((lo + sz + sz - 1) < (array_length - 1) ? (lo + sz + sz - 1) : (array_length - 1)));
}