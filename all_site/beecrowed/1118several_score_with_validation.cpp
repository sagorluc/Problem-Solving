#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b, flag = 0, y;
    int x;

    while(1)
    {
        cin >> a;
        if(a < 0 or a > 10)
            cout<< "nota invalida\n";

        else if(flag == 0)
        {
            b = a;
            flag = 1;
        }
        else
        {
            cout<<fixed<<setprecision(2)<< "media = "<<(a+b)/2<<"\n";

        }

        cin >> x;

        if(x <= 1 or x >= 2)
            cout<< "novo calculo (1-sim 2-nao)\n";
        else if(flag == 0)
        {
            x = y;
            flag = 1;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<"media = "<<(x+y)/2<<endl;
            break;
        }


    }

    return 0;
}
