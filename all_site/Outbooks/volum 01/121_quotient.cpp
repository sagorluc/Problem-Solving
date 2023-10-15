#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,q1,r1,x2;
    cin >> x1 >> q1 >> r1 >> x2;

    float q2 = q1 * abs(x1 / x2);
    float r2 = abs(r1 - (q1*(x1 % x2)));

    cout<< q2 << " " << r2;


    return 0;
}