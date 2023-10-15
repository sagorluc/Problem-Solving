#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int even = 0, odd = 0;

    for(int i=s.size()-1; i>=0; i--)
    {
        if(i % 2 == 0)
            even = even + (s[i] - '0'); // converting string to integer and sum the even index number.
        else
            odd = odd + (s[i] - '0');


    }

    long long int res = odd - even;

    if(res % 11 == 0)
        cout<<"YES";
    else
        cout<<"NO";




    return 0;
}
