#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num; int sum = 0;

    for(int i=1; i<=6; i++)
    {
        cin >> num;

        if(num > 0)
            sum++;
    }
    cout<<sum<<" valores positivos\n";

    return 0;
}
