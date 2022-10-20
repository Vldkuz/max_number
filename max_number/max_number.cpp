#include <iostream>
using namespace std;

void Bubblesort(int* arr, int size_a);

int main()
{
	int n, counter_r = 0;
	cin >> n;
	long long int k = n;

	while (n>0)
	{
		++counter_r;
		n /= 10;
	}

	int* arr = new int[counter_r];
	int i = 0;

	while (k>0)
	{
		arr[i] = k % 10;
		++i;
		k /= 10;
	}

	Bubblesort(arr, counter_r);

	for (int i = 0; i < counter_r; ++i)
	{
		cout << arr[i];
	}

	return 0;
}

void Bubblesort(int* arr, int size_a)
{
	for (int i = 0; i < size_a-1; ++i)
	{
		for (int j = 0; j < size_a - i - 1; ++j) {
			if (arr[j + 1] > arr[j])
			{
				swap(arr[j+1], arr[j]);
			}
		}
	}
}
