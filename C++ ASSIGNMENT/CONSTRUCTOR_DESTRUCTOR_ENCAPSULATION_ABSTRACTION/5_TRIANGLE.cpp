//checking if the triangle is equilateral,scalene or isosceles in class triangle with member function three sides.


#include<iostream>
using namespace std;

class Triangle
{
    double s1, s2, s3;
public: 
    void getdata()
    {
        cout << "Input the length of three sides : ";
        cin >> s1 >> s2 >> s3;
    }
    
    void condition()
    {
        if (s1 == s2 && s2 == s3 && s3 == s1)
        {
            cout << "Triangle is equilateral";
        }
        else if (s1 != s2 && s2 != s3 && s3 != s1)
        {
            cout << "Triangle is scalene";
        }
        else 
        {
            cout << "Triangle is isosceles ";
        }
    }
};

int main()
{
    Triangle T;
   
    T.getdata();
    T.condition();
   

}

