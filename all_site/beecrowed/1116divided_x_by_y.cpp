#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        double x,y;
        cin >> x >> y;

        if(y == 0)
            cout<<"divisao impossivel\n";
        else
            cout<<fixed<<setprecision(1)<<x/y<<"\n";

    }


    return 0;
}
