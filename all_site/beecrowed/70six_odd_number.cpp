#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=0; i<6*2; i++)
    {
        if(n % 2 == 1)
            cout<< n <<"\n";
        n++;
    }


    return 0;
}
