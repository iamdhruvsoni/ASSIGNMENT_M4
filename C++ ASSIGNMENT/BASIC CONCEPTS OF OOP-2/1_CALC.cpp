//1.WAP to create simple calculator using class


#include<iostream>
using namespace std;

class Math
{
	private:
		int n1,n2;//data member of "Math" Class.
	public:
		void getdata() //member fun1 for math class.
		{
			cout<<"\n\n\t Input n1: ";
			cin>>n1;
			cout<<"\n\n\t Input n2: ";
			cin>>n2;
		}
		void putdata() //member fun2 for math class.		
		{
			cout<<"\n\n\t n1 = "<<n1;
			cout<<"\n\n\t n2 = "<<n2;
		}
		void add()
		{
			cout<<"\n\n\t Addition = "<<n1+n2;
		}
		void mult()
		{
			cout<<"\n\n\t Multipication = "<<n1*n2;
		}
		void div()
		{
			cout<<"\n\n\t division = "<<n1/n2;
		}
		void sub()
		{
			cout<<"\n\n\t subtraction = "<<n1-n2;
		}
		void mod()
		{
			cout<<"\n\n\t Modulus = "<<n1%n2;
		}
};

main()
{
	Math obj;//obj is an object of math class.
	
	obj.getdata();
	obj.putdata();
	obj.add();
	obj.mult();
	obj.div();
	obj.sub();
	obj.mod();
}
