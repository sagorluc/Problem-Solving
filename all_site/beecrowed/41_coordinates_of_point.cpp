#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;

    cin >> a >> b;

    if(a + b == 0)
        cout<<"Origem\n";
    else if(a == 0)
        cout<<"Eixo y\n";
    else if(b == 0)
        cout<<"Eixo x";
    else if(a > 0 && b > 0)
        cout<<"Q1\n";
    else if(a < 0 && b > 0)
        cout<<"Q2\n";
    else if(a < 0 && b < 0)
        cout<<"Q3\n";
    else if(a > 0 && b < 0)
        cout<<"Q4\n";

    return 0;
}
