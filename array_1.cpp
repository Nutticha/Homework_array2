#include<iostream>
using namespace std;
void display(int *salary , int);
int cal_bonus(int salary);
int main()
{
	int  num;
	cout << "======================================" << endl;
    cout << "Enter Number of person : ";
	cin  >> num;
	int *salary = new int[num];
	for(int i = 1 ; i < num ; i++)
	{
		cout << "Enter the salary : ";
		cin  >> salary[i] ;
	}
	
	cout << "======================================" << endl;
	display(salary , num);
	cout << "======================================" << endl;
	system("pause");
   
}
void display(int salary[] , int num)
{
	cout << "There are [ " << num << " ] persons. \n";
	for(int i = 0 ; i < num ; i++)
	{
		cout << "The salary for person : " << i + 1 << " : " << salary[i] << endl;
		cout << "And Bonus : " << cal_bonus(salary[i]) <<endl;
	}
}
int cal_bonus(int salary)
{
	return ( salary * 2 );
}