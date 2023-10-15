#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int sum_cd = c + d;
    int sum_ab = a + b;

    if(b > c && d > a && sum_cd > sum_ab && c > 0 && d > 0 && a % 2 == 0 )
        cout<< "Valores aceitos\n";
    else
        cout<< "Valores nao aceitos\n";

    return 0;
}
