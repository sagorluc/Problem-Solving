#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{

    long long int revers = 0;
    int original = x;

    if(x < 0)
        return false;

    while(x != 0)
    {
        int rem = x % 10;
        revers = revers * 10 + rem;
        x = x/10;
    }

    if(revers == original)
        return true;
    else
        return false;

}
int main()
{
    int n;
    cin >> n;

    bool ans = isPalindrome(n);

    if(ans)
        cout<<"yes\n";
    else
        cout<<"no\n";


    return 0;
}
