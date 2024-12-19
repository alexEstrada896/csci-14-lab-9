/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
//asks user for width and length of two rectengles
	double width1;
	double length1;
	double width2;
	double length2;
	cout <<"Enter the width of the rectangle A: "<<endl;
	cin >> width1;
	cout <<"Enter the length of rectangle A: " << endl;
	cin >> length1;
	cout <<"Enter the width of rectangle B: "<<endl;
	cin >> width2;
	cout << "Enter the length of rectangle B: " <<endl;
	cin >> length2;

//calculates the area of the rectangles
	double areaA;
	areaA = width1*length1;
	double areaB;
	areaB = width2*length2;
//displays which rectangle is greater or if they are the same
	if (areaA > areaB)
	{
		cout << "The area of rectangle A is "<<areaA<<" , the area of rectangle B is "<<areaB<<
		     ", rectangle A has a greater area then rectangle B"<<endl;
	}
	
        else if (areaB > areaA)
	    {
		cout << "The area of rectangle A is "<<areaA<<" , the area of rectangle B is "<<areaB<<
		     ", rectangle B has a greater area then rectangle A"<<endl;
	    }

	          else {
	    	  cout <<"The area of rectangle A is "<<areaA<<" , the area of rectangle B is "<<areaB<<
		       ", Rectengle A and B have the same Area"<<endl;
        	  }


	return 0;
}