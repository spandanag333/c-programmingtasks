#include<iostream>
using namespace std;
main()
{
int l,s,arr[10],n,i,j;
cout<<"enter the no of elements in the array";
cin>>n;
cout<<"enter the elements of the array: ";
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
l=arr[0];
for(i=0;i<n;i++)
{
	if(l<arr[i])
	l=arr[i];
}
s=arr[0];

for(j=0;j<n;j++)
{
	if(s>arr[j])
	s=arr[j];
}
cout<<"largest element in the array is "<<l<<"\n";
cout<<"smallest element in the array is "<<s;
}

