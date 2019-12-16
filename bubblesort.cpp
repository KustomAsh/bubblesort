#include<iostream>
#include<ctime>
using namespace std;
void bubble_Sort(int arr[], int size);
void print(int arr[], int size);
int main()
{
	int dataarray[50], temp[50];
	srand(time(NULL));
	//total random:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (random) \n";
	bubble_Sort(dataarray, 50);
	print(dataarray, 50);
	//nearly sorted:
	for (int i = 0; i < 20; i++)
	{
		dataarray[i] = rand() % 1000;
	}
	cout << "sorting array (nearly sorted) \n";
	bubble_Sort(dataarray, 50);
	print(dataarray, 50);
	//reversing:
	for (int i = 0, j = 49; i < 50; i++, j--)
	{
		temp[j] = dataarray[i];
	}
	cout << "sorting array (reversed) \n";
	bubble_Sort(temp, 50);
	print(dataarray, 50);
	//redundant:
	for (int i = 0; i < 50; i++)
	{
		dataarray[i] = rand() % 100;
	}
	cout << "sorting array (redundant values) \n";
	bubble_Sort(dataarray, 50);
	print(dataarray, 50);
	system("pause>0");
	return 0;
}
void bubble_Sort(int arr[], int size)
{
	bool flag = true;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				arr[j] += arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] -= arr[j + 1];
			}
			else if (j == size - 1) flag = false;
		}
		if (flag == false)
			break;
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < 50; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}
