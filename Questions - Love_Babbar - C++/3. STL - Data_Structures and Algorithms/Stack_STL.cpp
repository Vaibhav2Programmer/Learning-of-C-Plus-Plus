#include<iostream>
#include<stack>
using namespace std;

// Stack follows the concept of last in - First Out
// Jo sabse pehle rakha jayega wo sabse pehle nikala jayega like plates arranged in food stall in weddings.

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<string> s;

	s.push("Vaibhav");
	s.push("Rajoriya");
	s.push("Electrical Engineering");

// Here, electrical is added at the last in the stack so when we fetch it it will come first.
// In Stack, There is no back and front function, here we use top()

	cout << "Top Element = " << s.top() << endl;
	s.pop();
	cout << "top Element = " << s.top();
	cout << endl;
	cout << s.size();


	return 0;
}