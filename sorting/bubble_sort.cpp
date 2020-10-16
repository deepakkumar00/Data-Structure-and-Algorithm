#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i, n, a[100];
    cout<<"Enter Size of array";
    cin>>n;
    cout<<"Enter the array: \n";
    for(i = 0; i < n; i++)
        cin>>a[i];

    for(i = 0; i < n-1; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    cout<<"Sorted Array: ";
    for(i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    return 0;
}