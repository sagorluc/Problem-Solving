#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    // sort decreasing order
    if(a < b)
        swap(a,b);
    if(a < c)
        swap(a,c);
    if(b < c)
        swap(b,c);

    if(a >= b + c)
        cout<< "NAO FORMA TRIANGULO\n";

    else
    {
        if(pow(a,2) == pow(b,2) + pow(c,2))
            cout<<"TRIANGULO RETANGULO\n";

        else if(pow(a,2) > pow(b,2) + pow(c,2))
            cout<<"TRIANGULO OBTUSANGULO\n";

        else
            cout<<"TRIANGULO ACUTANGULO\n";

        if(a == b && b == c)
            cout<<"TRIANGULO EQUILATERO\n";

        else if(a == b || b == c || a == c )
            cout<<"TRIANGULO ISOSCELES\n";
    }

    return 0;
}
