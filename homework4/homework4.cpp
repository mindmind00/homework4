#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;
    float z = 0;

    
    do {

        cout << "Enter the letter grade(Enter 'x' to exit) ";
        cin >> ch;
        if (ch == 'a' || ch == 'A')
        {
            z = z + 4;
        }
        else if (ch == 'b' || ch == 'B')
        {
            z = z + 3;
        }
        else if (ch == 'c' || ch == 'C')
        {
            z = z + 2;
        }
        else if (ch == 'd' || ch == 'D')
        {
            z = z + 1;
        }
        else
        {
            z = z + 0;
        }

       
    } while (ch != 'x');


    cout << "Total grade Points : " << z << endl;
    cout << "GPA : " << z/5<<endl;
    return (0);
}