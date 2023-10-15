#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        int m,n,tmp;
        cin >> m >> n;

        if(m <=0 || n <= 0)
            break;

        if(m < n)
        {
            tmp = m;
            m = n;
            n = tmp;
        }

        int sum = 0,i;

        for(i=n; i<=m; i++)
        {
            cout<< i <<" ";
            sum = sum + i;
        }

        cout<<"sum="<<sum<<"\n";

    }



    return 0;
}
