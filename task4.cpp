#include<iostream>
using namespace std;
main()
{
	int arr[30];
	int i,sum=0,n=0;
	cout<<"enter the number of elements of an array(max 30) :";
	cin>>n;
	cout<<"enter the elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of all the elements in the array is "<<sum;
}

