#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n, i, imin, a[100];
	cout << "Size of unsorted array: ";
	cin >> n;
	cout << "Enter unsorted array: \n";
	for(i = 0; i < n; i++)
		cin>>a[i];
	for(i = 0; i < n; i++)
	{
		int min = a[i];
		int flag = 0;
		for(int j = i; j < n-1; j++)
		{
			if(a[j+1] < min)
			{
				min = a[j+1];
				imin = j + 1;
				flag = 1;
			}
		}
		if(flag == 1)
		{
			int tmp = a[i];
			a[i] = min;
			a[imin]= tmp;
		}
	}
	cout<<"Sorted Array: ";
	for(i = 0; i < n; i++)
		cout<<a[i]<<" ";
	return 0;
}
