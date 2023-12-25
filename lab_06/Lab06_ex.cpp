#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int company_id;
    float salary;
};

int main()
{
    Employee e1;
    e1.name = "Jane Doe";
    e1.company_id = 254;
    e1.salary = 5000.00;

    cout << "name: " << e1.name << endl;
    cout << "company id: " << e1.company_id << endl;
    cout << "salary: " << e1.salary << endl;

    return 0;
}