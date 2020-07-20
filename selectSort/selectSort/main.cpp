#include <iostream>
#include "selectSort.h"

int main()
{
	int n = 10;
	int b[10];
	for (int i = 0; i < n; ++i)
		std::cin >> b[i];
	selectSort example(n, b);
	example.sel_sort();
	if (example.isSorted())
		example.show();

	system("pause");
}