#include<iostream>
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
	cout<<const_b<<const_s<<i<<j;
	return 0;
}
