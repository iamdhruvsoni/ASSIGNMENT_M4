//use of constructors in multilevel inheritance.

#include<iostream> 
using namespace std; 

class A 
{ 
	public: 
		A() 
		{ 
			cout << "\n\n\t Base class constructor\n"; 
		} 
}; 

class B: public A 
{ 
	public: 
		B() 
		{ 
			cout << "\n\n\t Intermediate  class B constructor\n"; 
		} 
}; 

class C: public B 
{ 
	public: 
		C() 
		{ 
			cout << "\n\n\t Derived class C constructor\n"; 
		} 
}; 

int main() 
{ 
	C obj; 
	return 0; 
}

