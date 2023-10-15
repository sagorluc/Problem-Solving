#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double a,b,c, sum, avg;
    cin >> t;

    while(t--)
    {
        cin >> a >> b >> c;

        sum = a*2.0 + b*3.0 + c*5.0;
        avg = sum / 10.00;

        cout<<fixed<<setprecision(1)<< avg <<"\n";

    }



    return 0;
}
