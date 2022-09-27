#include <iostream>
//#include <string>
using namespace std;

void main()
{
	int No_Int = 3;    	// No_Int는 변수로써 값을 가지고 주소는 &No_Int가 된다.
	int* pt;		// 이 때, *pt로 pt를 포인터로 선언해 주었다.
	pt = &No_Int;		// pt에 주소값을 넣음으로써 *pt는 &No_Int에 담겨있는 값을 가지게 된다.
	cout << "정수내용" << No_Int << "정수주소" << &No_Int << endl;
	cout << "Pt내용" << *pt << "    pt주소" << pt << endl;
}

