#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

    double mul = a * b;
    double div = mul / 12.00;

    cout<<fixed<<setprecision(3)<< div <<"\n";

    return 0;
}
