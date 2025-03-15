//fractional number simplification
#include <iostream>

using namespace std;

void simplify(int *numerator, int *denominator)
{
    int small = *numerator;
    if(*denominator < small) small = *denominator;

    for (int i = 2; i < small; ++i)
    {
        while(*numerator % i == 0 && *denominator %i == 0)
        {
            *numerator /= i;
            *denominator /= i;
        }
        if(i > *numerator || i > *denominator)
            break;
    }
}
int main()
{
    int a, b;
    char x;
    cout << "Please enter the fractional number( ex. 12/18): ";
    cin >> a >> x >> b;

    simplify(&a,&b);

    cout << "After simplifying the number: "<< a << " / " << b;

    return 0;
}
