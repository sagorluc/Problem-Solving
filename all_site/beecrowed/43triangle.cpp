#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;

    cin >> a >> b >> c;

    int sum = a + b + c;

    if(a+b > c && b+c > a && c+a > b )
    {
        double sum = a + b + c;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<sum<<"\n";
    }
    else
    {
        double sum1 = (a + b)/2.0 * c;
        cout<< fixed<<setprecision(1)<<"Area = "<<sum1<<"\n";
    }


    return 0;
}
