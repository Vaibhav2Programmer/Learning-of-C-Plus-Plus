#include<iostream>
#include<queue>
using namespace std;

// Queue Follows the concept of a "QUEUE" like a queue in
// which first one gets out which has gone first.

// Jo sabse pehle gaya, wo sabse pehle bahar aayega.
// Consider a Queue as an straight line.

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	queue<int> q;

	q.push(10);
	q.push(25);
	q.push(99);

	// Here 10 will be the first element as it was the first one to be pushed
	//

	cout << q.front() << endl;

	return 0;
}