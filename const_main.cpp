#include<iostream>
using namespace std;

int main(int args, char* argv[])
{
	/**************指向常量的指针*********************/
	////常见形式const temp* p，temp const* p
	////指针所指指向的常量内容无法通过指针本身修改，但是原被指向的变量还是可以修改自身内容
	//int b = 8;
	//int a = 12;
	//int const* p = NULL;
	//p = &b;

	//cout << b << endl;
	//cout << *p << endl;

	////指针所指指向的常量内容无法通过指针本身修改
	////不能写成*p=a;
	//p = &a;

	//cout << a << endl;
	//cout << *p << endl;

	////原被指向的变量还是可以修改自身内容
	//a = 100;

	//cout << a << endl;
	//cout << *p << endl;
	//getchar();
	/**************指向常量的指针*********************/

	/**************常量指针*********************/
	//常见形式temp* const p
	//指针本身内容（地址）不能修改，但是其指向的内容（数据）可以修改
	int a = 8;
	//不能写成*p = a;
	int* const p = &a;
	
	cout << a << endl;
	cout << *p << endl;

	//int c = 10;
	//p=&c;
	//不能改变指针本身（地址）的内容
	//也不能变量之间地址赋值&a = &c;

	int b=100;
	*p = b;

	cout << b << endl;
	cout << *p << endl;

	cout << args<<endl;
	
	cout << strlen(*argv) << endl;
	cout << strlen(argv[0]) << endl;
	getchar();
	/**************常量指针*********************/

	return 0;
}