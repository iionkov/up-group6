#include<iostream>
using namespace std;
void fillZero(int* arr,int size)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int n;
	//We make sure that the input number is between 10 and 20
	do
	{
		cin >> n;
	}
	while (n < 10 || n > 20);
	int Array[20];
	//Filling the Array
	for (int i = 0;i < n;i++)
	{
		cin >> Array[i];
	}
	//a
	int histogram[10];
	fillZero(histogram, 10);//It is optional -> you can do this directly in the main() function
	//Iterating the Array and filling the histogram
	for (int i = 0;i < n;i++)
	{
		if (Array[i] == 0) histogram[0]++;
		else
		{
			int copy_number = Array[i];
			while (copy_number != 0)
			{
				histogram[copy_number % 10]++;
				copy_number /= 10;
			}
		}
	}
	//Finding the rarest digit
	bool first_min = true;
	int min_count;
	int rarestDigit;
	for (int i = 0;i < 10;i++)
	{
		if (histogram[i] != 0)
		{
			if (first_min)
			{
				rarestDigit = i;
				min_count = histogram[i];
				first_min = false;
			}
			else
			{
				if (histogram[i] <= min_count && histogram != 0)
				{
					rarestDigit = i;
					min_count = histogram[i];
				}
			}
		}
	}
	cout << "Rarest digit is: " << rarestDigit << endl;
	//b
	for (int i = 0;i < n;i++)
	{
		int count = 0;
		if (Array[i] <= 9) cout << Array[i] << endl;
		else
		{
			int temp = Array[i];
			while (temp != 0)
			{
				count++;
				temp /= 10;
			}
			if (count % 2 != 0) cout << Array[i] << endl;
		}
		
	}
	//c
	int permutation[20];
	fillZero(permutation, n);
	bool check = true;
	for (int i = 0;i < n;i++)
	{
		if (Array[i] >= 1 && Array[i] <= n)
		{
			permutation[Array[i] - 1]++;
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
	system("pause");
	return 0;
}
