#include "mergeSort.h"

void mergeSort::Merge(int lo, int mid, int hi)
{
	int i = lo; //��������
	int j = mid + 1; //�����Ұ��

	//һ����ʱ��������ı���,���������⣬����Խ�硣���Ѳ����
	//��һ������������һ����ԭ������һ���������������Ϊ��ĳ�Ա������ÿ�η�����ʱ�����ʱ��Ͳ����
	//��������ĳ�Ա����֤�����鲻��Խ��
	//��һ������ȱ�٣���Ϊÿ�ι鲢֮�������Ǿֲ��ź���ģ���������ƹ�ȥ��ÿ�ζ���鲢ԭ����û����������顣
	for (int k = lo; k <= hi; ++k)
	{//��ԭ���鸴��һ��
		temp_array[k] = array_ptr[k];
	}

	//k���ܴ�0��ʼ
	for (int k = lo; k <= hi; ++k)
	{
		if (i > mid)								array_ptr[k] = temp_array[j++];//�����þ���ȡ�ұ�Ԫ��
		else if (j > hi)							array_ptr[k] = temp_array[i++];//�Ұ���þ���ȡ���Ԫ��
		else if (temp_array[i] > temp_array[j])		array_ptr[k] = temp_array[j++];//���Ԫ�ش����ұߣ�ȡ��
		else										array_ptr[k] = temp_array[i++];//���Ԫ��С���ұߣ�ȡ��
	}

}


void mergeSort::Top2Down_merge_sort(int lo,  int hi)
{//�жϵݹ����
	if (lo >= hi)
		return;

	int mid = lo + (hi - lo) / 2;
	Top2Down_merge_sort(lo, mid); //��������
	Top2Down_merge_sort(mid + 1, hi); //�Ұ������
	Merge(lo, mid, hi);  //�鲢���
}

void mergeSort::Down2Top_merge_sort(int lo, int hi)
{//����lgN�������鲢
//�������ϲ���ʼ��һֱѭ������������������ϲ�������Ĺؼ��Ǻϲ�������������Ĵ�Сsz,ÿ�δ�С������
	
	for (int sz = 1; sz < array_length; sz = 2 * sz)
		//������ֵ���ܴ���arrar_length-sz������Խ��
		for (int lo = 0; lo < array_length - sz; lo += 2 * sz)
			Merge(lo, lo + sz - 1, ((lo + sz + sz - 1) < (array_length - 1) ? (lo + sz + sz - 1) : (array_length - 1)));
}