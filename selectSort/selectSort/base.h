#pragma once
#include <iostream>

class base
{
public:
	base(int n, int* array) :array_length(n), array_ptr(array) {}

	void exchange(int p, int q);

	bool isSorted();

	void show();

protected:  //����Ҫ�ܷ��ʵ�
	int array_length;
	int* array_ptr; //ָ�������ָ��
};
#pragma once
