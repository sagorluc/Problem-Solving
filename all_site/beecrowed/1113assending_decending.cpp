#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
       cin >> x >> y;
       if(x == y)
            break;

        if(x > y)
            cout<< "Decrescente\n";
        else if(x < y)
            cout<< "Crescente\n";

    }

    return 0;
}
