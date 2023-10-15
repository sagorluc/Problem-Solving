#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m,y;
    cin >> x >> m >> y;

    int total_food = x * m;
    int rem_food = total_food / (x+y);

    cout<< rem_food <<"\n";

    return 0;
}
