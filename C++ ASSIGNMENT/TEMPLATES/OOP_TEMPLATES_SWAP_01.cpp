//program of to swap the two values using template

#include<iostream>
using namespace std;

template<class T>
void swapping(T x, T y)
{
		T temp;
		temp=x;
		x=y;
		y=temp;
		
		cout<<"\n\n\t After Swapping ....";
		cout<<"\n\n\t a = "<<x;
		cout<<"\n\n\t b = "<<y;
}


main()
{
	float a,b;
	
	cout<<"\n\n\t Input value for a = ";
	cin>>a;
	cout<<"\n\n\t Input value for b = ";
	cin>>b;
	cout<<"\n\n\t Before Swapping ....";
	cout<<"\n\n\t a = "<<a;
	cout<<"\n\n\t b = "<<b;
	swapping(a, b);
}
