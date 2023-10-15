#include<bits/stdc++.h>
using namespace std;
int main()
{
    double avg, n;

    double cnt = 0, sum = 0;

    for(int i=0; i<6; i++)
    {
        cin >> n;

        if(n > 0)
        {
           sum = sum + n;
           cnt++;
        }
    }

    avg = sum / cnt;

    cout<< cnt <<" valores positivos\n"<<fixed<<setprecision(1)<<avg<<"\n";

    return 0;
}
