#include<bits/stdc++.h>
using namespace std;

class Employee {

private:
	string id, name;
	int years;

public:
	Employee setId(string id)
	{
		this->id = id;
		return *this;
	}

	Employee setName(string name)
	{
		this->name = name;
		return *this;
	}

	Employee setYears(int years)
	{
		this->years = years;
		return *this;
	}

	void print()
	{
		cout << "Name: " << name << "\nID: " << id << "\nYears: " << years;
	}

};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Employee emp;

	emp.setId("128").setName("Vaibhav").setYears(1).print();




	return 0;
}