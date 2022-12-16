#include<iostream>
using namespace std;

// Function Pointer is going to store address of function(set of instructions) which is
// stored in text section of memory.

void fun()
{
	cout << "Load Out";
}



int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// creating a function pointer.

	void (*fun_ptr)() = &fun; // first method, here & is optional
	fun_ptr(); // Calling function using function pointer.
	return 0;

// Can also be made using auto keyword

// auto fun_ptr = fun; fun return address of the function.

}