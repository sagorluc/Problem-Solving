#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, x;
    cin >> n;

    int cnt = 0, cnt_n = 0;

    while(n--)
    {
        cin >> x ;

        if(x >= 10 && x <= 20)
            cnt++;
        else
            cnt_n++;

    }
    cout<<cnt<<" in\n"<<cnt_n<<" out\n";



    return 0;
}
