#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,x,y;
    cin >> p >> x >> y;

    double ans = 100/p;
    double ans1 = ans * x;
    double ans2 = ans1 / y;
    cout << ans2 <<"\n";

    return 0;
}
