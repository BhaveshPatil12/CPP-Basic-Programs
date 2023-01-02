#include<iostream>
using namespace::std;
union Department
{
    int deptid;
    long numberofEmp;
    float total_salary_expense;
};
 
int main(int argc)
{
    union Department dept;
    dept.deptid = 100;
    cout<<"Dept id = "<<dept.deptid;
 
    dept.numberofEmp = 15000;
    cout<<"\nTotal Employee ="<<dept.numberofEmp;
    cout<<"\nTry to Print Dept Id = "<<dept.deptid;
    return 0;
}