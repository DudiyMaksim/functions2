#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void max_min(T a[], int size)
{
	T max = a[0], min = a[0];
	for (int i = 1; i < size; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
		else
		{
			if (min > a[i])
			{
				min = a[i];
			}
		}
	}
	cout << min << max;
}

template <typename T>
void sort_mas(T a[], int size)
{
	sort(a, a + size);
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << ' ';
	}
}

template <typename T>
T binarry_s(T a[], int size, T x)
{
	int start = 0, end = size - 1;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (x > a[mid])
		{
			start = mid + 1;
		}
		else if (x < a[mid])
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}

template <typename T>
void swap_v(T a[], int size, T s, T sw)
{
	int x = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i]==s)
		{
			a[i] = sw;
			x++;
			break;
		}
	}
	if (x==1)
	{
		cout << "the replacement was successful";
	}
	else
	{
		cout << "the replacement was not successful";
	}
}
int main()
{
	///*task 1*/
 //   float arr[10]{ 1,2.22,0,4,5,6,7,22.1,9,12 };
 //   max_min(arr, 10);
	///*task 2*/
	//float arr[10]{ 1,2.22,0,4,5,6,7,22.1,9,12 };
	//sort_mas(arr, 10);
	///*task 3*/
	//double arr[10]{ 1,2.22,0,4,5,6,7,22.1,9,12 };
	//cout << "Index of searck number : " << binarry_s(arr, 10, 2.22);
	///*task 4*/
	//int arr[10]{ 1,2,0,4,5,6,7,22,9,12 };
	//swap_v(arr, 10, 2, 3);
}