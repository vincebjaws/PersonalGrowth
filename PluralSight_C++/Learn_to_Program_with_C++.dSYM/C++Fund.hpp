#include <string>
#include <iostream>
using namespace std;

class Person{
    public:
        Person();
        Person(string personName, int employeeID);
        ~Person();
        int empID;
        string getName();
    private:
        string name;
};