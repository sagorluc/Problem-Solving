#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,tmp;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        // swapping value
        if(x > y)
        {
            tmp = x;
            x = y;
            y = tmp;
        }

        int sum = 0;
        for(int i = x+1; i<y; i++)
        {
            if(i % 2 == 1)
                sum = sum + i;
        }

        cout<< sum <<"\n";

    }

    return 0;
}
