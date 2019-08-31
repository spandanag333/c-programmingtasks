#include<iostream>
using namespace std;
	int swap(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
		cout<<"values of a and b after swapping "<<a<<" "<<b;
	}
	int main()
	{
		int x,y;
		cout<<"enter two numbers : ";
		cin>>x>>y;
		swap(x,y);
		
	}
	

