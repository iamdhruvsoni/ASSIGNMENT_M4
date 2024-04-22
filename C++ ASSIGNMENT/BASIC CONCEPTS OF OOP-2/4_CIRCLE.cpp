// C++ program to implement a class called Circle that has private
//member variables for radius.member function area,circumference

#include<iostream>
using namespace std;

class  Circle

{
	int r;
	
	public :
		void getdata()
		{
			cout<<"Enter the value of radius : ";
			cin>>r;
			cout<<"\n\n";
		}
		void area()
		{
			cout<<"Area of circle  is : "<<3.14*r*r<<"\n\n";
		}
		void circumference()
		{
			cout<<"circumference of circle  is : "<<2*3.14*r<<"\n\n";
		}
};
main()
{
	Circle C;
	

	
	C.getdata();
	C.area();
	C.circumference();
	
	
}
