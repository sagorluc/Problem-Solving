#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;

    ll ans;

    for(int i=2; i<=n; i+=2)
    {
          ans = pow(i,2);
            cout<<i<<"^2 = "<<ans<<"\n";
    }

    return 0;
}
