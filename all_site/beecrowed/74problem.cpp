#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,n;
    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n == 0)
            cout<<"NULL\n";
        else if(n % 2 == 0)
        {
            if(n > 0)
                cout<<"EVEN POSITIVE\n";
            else
                cout<<"EVEN NEGATIVE\n";
        }
        else
        {
            if(n < 0)
                cout<<"ODD NEGATIVE\n";
            else
                cout<<"ODD POSITIVE\n";
        }

    }


    return 0;
}
