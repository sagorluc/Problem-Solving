#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1, c2, u1, u2;
    double p1, p2;

    cin >> c1 >> u1 >> p1 >> c2 >> u2 >> p2;

    //double sum1 = u1 + u2;
    double sum2 = (u1 * p1) + (u2 * p2);

    cout<< fixed << setprecision(2) <<"VALOR A PAGAR: R$ " << sum2 <<"\n";


    return 0;
}
