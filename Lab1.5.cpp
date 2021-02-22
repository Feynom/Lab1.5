#include <iostream>
#include "Fraction.h"
#include "Pair.h"

int main()
{
    Pair a, b, c, d;
    Fraction f;

    cout << "\nPair a" << endl;
    a.Init(1, 2.5);
    a.Display();

    cout << "\nPair b" << endl;
    b.Init(2.5, 1);
    b.Display();

    cout << "Pair c" << endl;
    c.Init(1, 2.5);
    c.Display();


    cout << "\na and b" << endl;
    f.ComparePairs(a, b);
   
    cout << "\na and c" << endl;
    f.ComparePairs(a, c);

    cout << "\nb and c" << endl;
    f.ComparePairs(b, c);
    
    return 0;
}
