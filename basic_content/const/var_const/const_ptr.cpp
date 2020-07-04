#include<iostream>
using namespace std;

int main()
{
	/*-----------------------------------------
	int  a = 10;
	const int *p = &a;	//error: invalid conversion from 'int' to 'const int'
	*p = 20;	//error: assignment of read-only location '*p'
	int b = 5;
	p = &b;
	-------------------------------------------*/
	
	/*-------------------------------------------
	int a = 10;
	const int *p;
	p = &a;
	a = 20;
	cout<<*p<<endl;	//output: 20  success change '*p' with 'a'
	--------------------------------------------*/
	
	/*------------------------------------------
	int const *ptr;		//same with 'const int *ptr'
	int a = 5;
	ptr = &a;
	*ptr = 1;	//error
	-------------------------------------------*/

	/*-------------------------------------------
	int num = 0;
	int * const ptr = &num;		//const指针必须初始化！且const指针的值不能修改
	int *t = &num;
	*t = 1;
	num = 2;
	*ptr = 3;
	cout<<*ptr<<endl;	//output: 3
	--------------------------------------------*/
	
	const int num = 0;
	int * const ptr = &num;		//error! const int* -> int*
	cout<<*ptr<<endl;
	return 0;
}
