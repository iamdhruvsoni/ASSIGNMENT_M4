//program to display the age,name and country of person using class name person


#include<iostream>
using namespace std;

class Person

{
	int age;
	string nm,ctry;
	
	
	public:
		void getdata()
		{
			cout<<"Enter the age of person : ";
			cin>>age;
			cout<<"Enter the name of person : ";
			cin>>nm;
			cout<<"Enter the country of person : ";
			cin>>ctry;
		}
		void putdata()
		{
			cout<<"Age of person is : "<<age<<"\n";
			cout<<"name of person is : "<<nm<<"\n";
			cout<<"country of person is : "<<ctry<<"\n";
		}
};
main()
{
	Person P;
	
	P.getdata();
	P.putdata();
}
