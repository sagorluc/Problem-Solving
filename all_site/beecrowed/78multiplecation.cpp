#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ans;
    cin >> n;

    for(int i=1; i<=10; i++)
    {
        ans = i * n;
        cout<<i<<" x "<<n<<" = "<<ans<<"\n";
    }


    return 0;
}
