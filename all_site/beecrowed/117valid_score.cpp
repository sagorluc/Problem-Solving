#include<bits/stdc++.h>
using namespace std;
#define ss ios::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    ss;

    double x,y;
    int flag = 0;


    while(true)
    {
        cin >> x;
        if(x < 0 or x > 10)
            cout<< "nota invalida\n";

        else if(flag == 0)
        {
            y = x;
            flag = 1;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<"media = "<< (x+y)/2 <<"\n";
            break;
        }
    }


    return 0;
}
