#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin >> x >> y;

    double ans = x-y;
    double ans1 = ans/1000;
    double res = ans1*100;

    cout<< res <<"%"<<endl;

    return 0;
}
