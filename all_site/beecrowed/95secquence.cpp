#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 60;

    int i = 1;
    for(int j=n; j>=0; j--)
    {
        cout<<"I="<<i<<" "<<"j="<<j<<"\n";

        i+=3;
        j-=4;
    }


    return 0;
}
