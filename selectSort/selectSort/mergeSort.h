#pragma once
#include "base.h"

class mergeSort :public base
{
public:
	explicit mergeSort(int l, int* p) :base(l, p) 
	{//初始化了指针才能用，全复制
		temp_array = new int[array_length];
		for (int k = 0; k < array_length; ++k)
			temp_array[k] = array_ptr[k];
	}

	~mergeSort()//析构
	{
		delete[] temp_array;
		temp_array = NULL;
	}

	void Merge(int lo, int mid, int hi);//原地归并方法

	void Top2Down_merge_sort(int lo, int hi);//自顶向下判断什么时候递归结束

	void Down2Top_merge_sort(int lo, int hi);//自下而上判断什么时候递归结束

private:
	//临时数组，用来保存原数组，完全归并排序
	int* temp_array;
};