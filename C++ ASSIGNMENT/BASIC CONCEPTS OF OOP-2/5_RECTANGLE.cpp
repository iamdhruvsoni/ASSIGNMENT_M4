//class called Rectangle that has private
//member variables for length and width,member functions to
//calculate the rectangle's area and perimeter.


#include<iostream>
using namespace std;

class  Rect

{
	int l,b;
	
	public :
		void getdata()
		{
			cout<<"Enter the value of length : ";
			cin>>l;
			cout<<"Enter the value of breadth : ";
			cin>>b;
			cout<<"\n\n";
		}
		void area()
		{
			cout<<"Area of rectangle  is : "<<l*b<<"\n\n";
		}
		void perimeter()
		{
			cout<<"perimeter of circle  is : "<<2*(l+b)<<"\n\n";
		}
};
main()
{
	Rect R;
	
	R.getdata();
	R.area();
	R.perimeter();
	
	
}
