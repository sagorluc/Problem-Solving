#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,ans,mul,div;
    cin >> n;

    if(n >= 0 && n <= 400.00)
    {
        div = n / 100;
        mul = div * 15.00;
        ans = n + mul;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<< ans <<"\n"<<"Reajuste ganho: "<< mul <<"\n";
        cout<<"Em percentual: 15 %\n";
    }
    else if(n >= 400.00 && n <= 800.00)
    {
        div = n / 100;
        mul = div * 12.00;
        ans = n + mul;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<< ans <<"\n"<<"Reajuste ganho: "<< mul <<"\n";
        cout<<"Em percentual: 12 %\n";
    }
    else if(n >= 800.00 && n <= 1200.00)
    {
        div = n / 100;
        mul = div * 10.00;
        ans = n + mul;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<< ans <<"\n"<<"Reajuste ganho: "<< mul <<"\n";
        cout<<"Em percentual: 10 %\n";
    }
    else if(n >= 1200.00 && n <= 2000.00)
    {
        div = n / 100;
        mul = div * 7.00;
        ans = n + mul;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<< ans <<"\n"<<"Reajuste ganho: "<< mul <<"\n";
        cout<<"Em percentual: 7 %\n";
    }
    else
    {
        div = n / 100;
        mul = div * 4.00;
        ans = n + mul;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<< ans <<"\n"<<"Reajuste ganho: "<< mul <<"\n";
        cout<<"Em percentual: 4 %\n";
    }


    return 0;
}
