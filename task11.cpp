#include<iostream>
using namespace std;
class passenger
{
	private:
	char name[50];
	char gender;
	int age;
	int date;
	char from[40],dest[40];char cl[50];
	float price;
	public:
		getdata();
		ticket();
		};
passenger :: getdata()
{
	cout<<"\nPLEASE ENTER YOUR NAME :\n";
	cin>>name;
	cout<<"\nPLEASE ENTER YOUR GENDER :\n";
	cin>>gender;
	cout<<"\nPLEASE ENTER YOUR AGE :\n";
	cin>>age;
	cout<<"\nPLEASE ENTER THE DATE OF JOURNEY:\n ";
	cin>>date;
	cout<<"FROM :\n";
	cin>>from;
	cout<<"TO :\n";
	cin>>dest;
	cout<<"PLEASE ENTER THE CLASS :1.)AC FIRST CLASS(1A)\n 2.)AC 2 Tier(2A)\n 3.)AC 3 Tier(3A)\n 4.)AC Chair Car(CC) \n 5.)Sleeper(SL) \n 6.)Second Sitting(2S)\n";
	int op;
	cin>>op;
	switch(op)
	{
		case 1:
			{
			cout<<"YOU SELECTED,AC FIRST CLASS(1A)";
			price=2000;
			cout<<"FARE FOR YOUR TICKET IS "<<price;
		
			break;
		}
			case 2:
				{
				cout<<"YOU SELECTED,AC 2 Tier(2A)";
				price=1500;
				cout<<"FARE FOR YOUR TICKET IS "<<price;
			
				break;
			}
				case 3:
					{
		    	cout<<"YOU SELECTED,AC 3 Tier(3A)";
				price=1000;
				cout<<"FARE FOR YOUR TICKET IS "<<price;
				
				break;
				}
			case 4:
						{
			cout<<"YOU SELECTED,AC Chair Car(CC)";
			price=700;
			cout<<"FARE FOR YOUR TICKET IS "<<price;
			
			break;
		}
		case 5:
				{
			cout<<"YOU SELECTED,Sleeper(SL)";
			price=380;
			cout<<"FARE FOR YOUR TICKET IS "<<price;
		
			break;
		}
		default:
				{
			cout<<"YOU SELECTED,Second Sitting(2S)";
			price=150;
			cout<<"FARE FOR YOUR TICKET IS "<<price;
		
			break;
		}
		}
}
passenger :: ticket()
{
	cout<<"\n\n"<<name<<"\t"<<gender<<"\t"<<age<<"\n";
	cout<<"DATE OF JOURNEY IS "<<date<<"\n";
	cout<<"FROM : "<<from<<"\n";
	cout<<"TO   : "<<dest<<"\n";
	cout<<"TICKET FARE :"<<price;
}
main()
{
	passenger p[2];
	for(int i=0;i<2;i++)
	{
		p[i].getdata();
	}
	for(int j=0;j<2;j++)
	{
		p[j].ticket();
 	}
	return 0;
}
