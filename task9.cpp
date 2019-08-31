#include<iostream>
using namespace std;
int main()
{
	int days,yrs,weeks;
	cout<<"enter the no of days: ";
	cin>>days;
	yrs=days/365;
	weeks=(days%365)/7;
	days=days-((yrs*365)+(weeks*7));
	cout<<"DAYS  : "<<days<<endl;
	cout<<"WEEKS : "<<weeks<<endl;
	cout<<"YEARS : "<<yrs<<endl;
	return 0;	
}
