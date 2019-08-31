#include<iostream>
using namespace std;
#include<string.h>
main()
{
	char s[30];
	int i,l;
	cout<<"enter a string :";
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>=65 && s[i]<=92)
		{
			s[i]=s[i]+32;
	    }
	}
	cout<<"String in the lowercase is  " <<s;
	return 0;
}
