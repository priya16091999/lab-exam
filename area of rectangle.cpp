/* Que 2] Write a program to print the area of two rectangles having sides
 (4,5) and (5,8) respectively by creating aclass named 'Rectangle'
 with a function named 'Area' which returns the area.Length */ 

#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int l,b;
	public:
		void Area(int l,int b)
		{
			cout<<"\n Area of rectangle = "<<l*b;
		}
};
int main()
{
	Rectangle r1,r2;
	r1.Area(4,5);
	r2.Area(5,8);
	return 0;
	
}