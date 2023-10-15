#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    int ans = x + y;
    int ans1 = ans / 2;
    int ans2 = ans1-y;

    cout<< ans1 <<" " << ans2 <<"\n";

    return 0;
}
