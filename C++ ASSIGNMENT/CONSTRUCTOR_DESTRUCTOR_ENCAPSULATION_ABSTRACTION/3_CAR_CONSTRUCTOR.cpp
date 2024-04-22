//Car that has private
//member variables for company, model, and year.
//functions to get and set these variables.


#include<iostream>
using namespace std;

class car

{
  char co[50];
  int mo,yr;
  
  public:
    car()
	{
	   cout<<"Enter the company name of car : ";
	   cin>>co;	
	   cout<<"Enter the model of car : ";
	   cin>>mo;	
	   cout<<"Enter the year: ";
	   cin>>yr;	
	}	
	void print()
	{
		cout<<"\n\n\t Company name is : "<<co;
		cout<<"\n\n\t Model :"<<mo;
		cout<<"\n\n\t year : "<<yr;
	}
};
main()
{
	car c;
	
	c.print();
	
}
