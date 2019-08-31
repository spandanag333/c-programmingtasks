#include<iostream>
using namespace std;
#include<string.h>
int main( )
{
	char str1[30],str2[30];
	int l1,l2,l;
	int found=0,notfound=0;
	int i,j;
	cout<<"enter 1st string : ";
	gets(str1);
	cout<<"enter 2nd string : ";
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==l2)
	{
		l=l1;
		for(i=0;i<l;i++)
		{
			found=0;
			for(j=0;j<l;j++)
			{
				if(str1[i]==str2[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				notfound=1;
				break;
			}
		}
		if(found==1)
		{
			cout<<"Both the strings are Anagram to each other ";
		}
		if(found==0)
		{
			cout<<"Both the strings are not Anagram to each other ";
		}
	}
	else
	{
		cout<<"Both the strings must have equal number of characters to be anagram"<<endl;
	}
	return 0;
}
