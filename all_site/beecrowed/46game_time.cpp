#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;

    if(a < b)
        c = b - a;
    else
        c = 24 - a + b;

    cout<< "O JOGO DUROU " << c <<" HORA(S)\n";


    return 0;
}
