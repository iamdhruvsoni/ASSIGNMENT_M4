//Maths operations using constructor

#include<iostream>
using namespace std;

class Math
{
	int n1,n2;
	
	public :
		
		Math()
		{
		 n1=10,n2=10;
		}
		void print()
		{
			cout<<"\n\n\t n1 = "<<n1;
			cout<<"\n\n\t n2 = "<<n2;
		}
		void Add()
		{
			cout<<"\n\n\t Addition is : "<<n1+n2;
		}
		void Mult()
		{
			cout<<"\n\n\t Multiplication is : "<<n1*n2;
		}
		void Sub()
		{
			cout<<"\n\n\t Subtraction is : "<<n1-n2;
		}
		void Div ()
		{
			cout<<"\n\n\t Division is : "<<n1/n2;
		}
	};
		
main()
{
	Math M;
	
	M.print();
	M.Add();
	M.Mult();
	M.Sub();
	M.Div();
	
	
}

