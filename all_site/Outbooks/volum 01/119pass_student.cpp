#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin >> x >> y;

    double ans = 100/x;
    double ans1 = x - y;
    double res = ans * ans1;
    cout<< res <<"%"<< endl;

    return 0;
}
