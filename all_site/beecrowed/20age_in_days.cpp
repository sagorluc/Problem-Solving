#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int y,m,d;

    y = n / 365;
    m = (n % 365) / 30;
    d = (n % 365)% 30;

    cout<< y<<" ano(s)\n";
    cout<< m<<" mes(es)\n";
    cout<< d<<" dia(s)\n";


    return 0;
}
