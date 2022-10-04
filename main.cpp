/*
* Ethan Reece - EDR220000
* Rajit Goel - RXG210046
*/

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle R2(6.5, 8.5);
    Rectangle toBeCopied(12.4, 6.2);
    Rectangle R1(toBeCopied);

    R2.setLength(9.7);
    R2.setWidth(4.3);

    cout << "Rectangle 1: " << R1 << endl;
    cout << "Rectangle 2: " << R2 << endl;

    cout<<"Addition: "<<(R2 + R1)<<endl;
    cout<<"Subtraction R1 - R2: "<<(R1 - R2)<<endl;
    cout<<"Subtraction R2 - R1: "<<(R2 - R1)<<endl;

    cout<<"Is rectangle 1's area smaller than rectangle 2's area? ";
    cout << ((R1 < R2) ? "Yes" : "No") << endl;

    cout<<"Is rectangle 1's area bigger than rectangle 2's area? ";
    cout << ((R1 > R2) ? "Yes" : "No") << endl;
    
    cout << "Rectangle 1's area: " << R1.getLength() * R1.getWidth() << endl;
    cout << "Rectangle 2's area: " << R2.getLength() * R2.getWidth() << endl;

    cout << "Prefix Incrementing Rectangle 1 before: " << (++R1) << endl;
    cout << "Prefix Incrementing Rectangle 1 after: " << R1 << endl;
    cout << "Postfix Incrementing Rectangle 2 before: " << (R2++) << endl;
    cout << "Postfix Incrementing Rectangle 2 after: " << R2 << endl;

    return 0;
}
