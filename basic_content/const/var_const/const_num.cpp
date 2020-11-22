/*
 * @Author: your name
 * @Date: 2020-11-11 12:41:55
 * @LastEditTime: 2020-11-12 18:01:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\basic_content\const\var_const\const_num.cpp
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*-------------------------------------
	const int const_b = 1;
	const_b = 2;	//error: assignment of read-only variable 'const_b'
	const string const_s = "hello world";
	const int i, j = 0;	//error:uninitialized const 'i'
	--------------------------------------*/
	const int const_b = 1;
	const string const_s = "hello world";
	const int i = 1, j = 0;
	cout<<const_s<<i<<j;
	return 0;
}
