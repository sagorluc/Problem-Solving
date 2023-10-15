#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    float ans = y - x;
    float ans1 = (ans / x);
    float res = ans1 * 100;

    cout<< res <<"\n";

    return 0;
}
