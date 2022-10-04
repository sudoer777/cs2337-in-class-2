/*
* Ethan Reece - EDR220000
* Rajit Goel - RXG210046
*/

#include <iostream>
#include <math.h>
#include "Rectangle.h"

using namespace std;

// Create 2 Rectangle objects
// one object is created by the overloaded constructor
// one object is created by the copy contructor
// Use the mutator to change the length and width of one of the objects
// Print out:
// the addition of the two objects
// the subtraction of the two objects
// the prefix increment of one of the objects
// the postfix incrementation of the other object
// the result of object1 < object2
// the result of object1 > object2
// the area of object1 and object2

int main()
{
    Rectangle R2(6.5, 8.5);
    Rectangle toBeCopied(12.4, 6.2);
    Rectangle R1=toBeCopied;
    Rectangle R3;
    
    R2.setLength(9.7);
    R2.setWidth(4.3);

    cout << "Rectangle 1: " << R1 << endl;
    cout << "Rectangle 2: " << R2 << endl;

    R3= R2 + R1;
    cout<<"Addition: "<<R3<<endl;
    R3= R1 - R2;
    cout<<"Subtraction: "<<R3<<endl;
    

    bool relationals = R1 < R2;
    
    cout<<"Is rectangle 1's area smaller than rectangle 2's area? ";
    if(relationals){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    
    relationals = R1 > R2;
    
    cout<<"Is rectangle 1's area bigger than rectangle 2's area? ";
    if(relationals){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    
    cout << "Rectangle 1's area: " << R1.getLength() * R1.getWidth() << endl;
    cout << "Rectangle 2's area: " << R2.getLength() * R2.getWidth() << endl;

    cout << "Prefix Incrementing Rectangle 1 before: " << (++R1) << endl;
    cout << "Prefix Incrementing Rectangle 1 after: " << R1 << endl;
    cout << "Postfix Incrementing Rectangle 2 before: " << (R2++) << endl;
    cout << "Postfix Incrementing Rectangle 2 after: " << R2 << endl;


    return 0;
}
