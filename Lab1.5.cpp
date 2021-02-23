#include <iostream>
#include "Fraction.h"
#include "Pair.h"

int main()
{
    Pair a, b, c, d;
    Fraction f;
    int result;

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
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);
   
    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);
    
    return 0;
}
