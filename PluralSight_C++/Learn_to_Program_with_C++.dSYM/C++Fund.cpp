#include <string>
#include <iostream>
#include "C++Fund.hpp"
using namespace std;

Person::Person():name("N/A"), empID(1)
{
    cout << "constructing default." << endl;
}
Person::Person(string personName, int employeeID): name(personName), empID(employeeID)
{
    cout << "constructing other."<< endl;
}
Person::~Person(){
    cout << "Deconstructing\n";
}

string Person::getName(){
    return name;
}