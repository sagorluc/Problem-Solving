#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;

    double p = (b * b) - (4 * (a) * (c));

    if(p > 0 && a != 0)
    {
        double x,y;

        p = sqrt(p);
        x = (-b + p) / (2.0*a);
        y = (-b - p) / (2.0*a);

        cout<<fixed<<setprecision(5)<< "R1 = " << x <<"\n";
        cout<<fixed<<setprecision(5)<< "R2 = " << y <<"\n";
    }
    else
        cout<< "Impossivel calcular\n";


    return 0;
}
