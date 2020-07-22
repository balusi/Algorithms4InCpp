#pragma once
#include "base.h"

class mergeSort :public base
{
public:
	explicit mergeSort(int l, int* p) :base(l, p) 
	{//��ʼ����ָ������ã�ȫ����
		temp_array = new int[array_length];
		for (int k = 0; k < array_length; ++k)
			temp_array[k] = array_ptr[k];
	}

	~mergeSort()//����
	{
		delete[] temp_array;
		temp_array = NULL;
	}

	void Merge(int lo, int mid, int hi);//ԭ�ع鲢����

	void Top2Down_merge_sort(int lo, int hi);//�Զ������ж�ʲôʱ��ݹ����

	void Down2Top_merge_sort(int lo, int hi);//���¶����ж�ʲôʱ��ݹ����

private:
	//��ʱ���飬��������ԭ���飬��ȫ�鲢����
	int* temp_array;
};