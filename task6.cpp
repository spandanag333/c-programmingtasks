#include<iostream>
using namespace std;
main()
{
	int a[50],i,j,n,temp;
	cout<<"enter the number of elements : ";
	cin>>n;
	cout<<"Enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//arranging elements in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
