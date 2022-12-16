#include<iostream>
using namespace std;

class Employee;

class Printer {
public:
    void printEmp(const Employee & e);
};

class Employee {
private:
    int id;
    string name;
public:
    friend class Printer;
    Employee(int id, string name) : id(id), name(name) {}
};

void Printer::printEmp(const Employee & e) {
    cout << e.id << ' ' << e.name << '\n';
}

int main()
{
    string s2;
    cin >> s2;
    cout << s2 << " ";
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}

// Imp Note - // Declaring class as a friend
// It will give access to printer class functions to access private & protected
// members of class Employee