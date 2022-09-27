#include <iostream>
//#include <string>
using namespace std;

void main()
{
	int No_Int = 3;
	int* pt;
	pt = &No_Int;
	cout << "정수내용" << No_Int << "정수주소" << &No_Int << endl;
	cout << "Pt내용" << *pt << "    pt주소" << pt << endl;
}
