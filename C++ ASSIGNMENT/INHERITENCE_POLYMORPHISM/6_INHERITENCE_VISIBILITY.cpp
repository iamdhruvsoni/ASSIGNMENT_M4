#include<iostream>
using namespace std;

class Base
{
	private : int a;  //accessible by this class only. (Base class)
	
	protected : int b; //accessible by derived class only(limited access).
	
	public : int c; //accessible in derived class & main().
	
			int get_a()
			{
				a=100;
				return a;
			}
				
};


class Derived : public Base
{
	public :
			int get_b()
			{
				cout<<"\n\n\t Private Value : A = "<<get_a();
				b=200;  
				return b;
			}
			
			int get_c()
			{
				c=300; 
				return c;
			}			
};

main()
{
	Derived D;
	cout<<"\n\n\t Protected Value : B = "<<D.get_b();
	cout<<"\n\n\t Public Value : C = "<<D.get_c();
	D.c=500; 
	cout<<"\n\n\t Public Value (Changed in main): C = "<<D.c;
	
}







