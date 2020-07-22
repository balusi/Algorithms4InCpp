#include <iostream>
#include "selectSort.h"
#include "insertSort.h"
#include "shellSort.h"
#include "mergeSort.h"



int main()
{
	int n = 10;
	int b[10];
	for (int i = 0; i < n; ++i)
		std::cin >> b[i];

	//selectSort exam_select(n, b);
	//exam_select.sel_sort();

	//if (exam_select.isSorted())
	//	exam_select.show();

	//insertSort exam_insert(n, b);
	//exam_insert.insert_sort();
	//if (exam_insert.isSorted())
	//	exam_insert.show();

	//shellSort exam_shell(n, b);
	//exam_shell.shell_sort();
	//if (exam_shell.isSorted())
	//	exam_shell.show();

	mergeSort exam_merge(n, b);
	exam_merge.Top2Down_merge_sort(0,9);
	if (exam_merge.isSorted())
		exam_merge.show();


	system("pause");
}