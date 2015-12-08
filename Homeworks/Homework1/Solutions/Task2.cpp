#include<iostream>
using namespace std;
double InputSequence()
{
	int k;
	do
	{
		cout << "Enter k: ";
		cin >> k;
	}
	while (k < 0);
	double number;
	
	cout << "Enter number: ";
	cin >> number;
	double previous = number;
	double product = number;
	k--;
	while (k != 0)
	{
		cout << "Enter number: ";
		cin >> number;
		if (number < previous)
		{
			product *= number;
			k--;
		}
	}
	return product;
}
int main()
{
	cout << InputSequence();
	system("pause");
	return 0;
}
