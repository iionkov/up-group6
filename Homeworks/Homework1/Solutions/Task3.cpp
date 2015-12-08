#include<iostream>
using namespace std;
void fillZero(int* arr, int size)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int n;
	do
	{
		cout << "Enter n: ";
		cin >> n;
	}
	while (n < 2 || n > 20);
	float matrix[20][20];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
			cin >> matrix[i][j];
	}
	//a
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
			sum += matrix[i][j];
	}
	cout << "Sum is: " << sum;
	//b
	int prod = 1;
	for (int i = 0;i < n;i++)
	{
		for (int j = n - i - 1;j < n;j++)
			prod *= matrix[i][j];
	}
	cout << "Product is: " << prod;
	//c
	for (int i = 1;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			int permutation[20];
			fillZero(permutation, n);
			bool check = true;
			for (int i = 0;i < n;i++)
			{
				if (matrix[i][j] >= 1 && matrix[i][j] <= n)
				{
					float control = matrix[i][j] - 1.0;
					if (control == (int)control)
					{
						permutation[(int)control]++;
					}
				}
				else
				{
					cout << "No";
					check = false;
					break;
				}
			}
			if (check)
			{
				int sum = 0;
				for (int i = 0;i < n;i++)
				{
					sum += permutation[i];
				}
				cout << boolalpha << (sum == n);
			}
		}
	}
	system("pause");
	return 0;
}
