#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, sum = 0;
    int mx,mn;
    cin >> x >> y;

    mx = max(x,y);
    mn = min(x,y);

    for(int i= (mn+1); i<mx; i++)
    {

            if(i % 2 != 0)
                sum = sum + i;

    }

    cout<<sum<<"\n";


    return 0;
}
