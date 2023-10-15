#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sal;
    cin >> sal;

    if(sal >= 0.00 && sal <= 2000.00)
        cout<<"Isento\n";
    else if(sal > 2000.00 && sal <= 3000.00 )
    {
        double sub = sal - 2000.00;
        double mul = sub * 0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<mul<<"\n";
    }

    else if(sal > 3000.00 && sal <= 4500.00 )
    {
        double sub = sal - 3000.00;
        double mul = sub * 0.18 + 1000.00 * 0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<mul<<"\n";
    }

    else
    {
        double sub = sal - 4500.00;
        double mul = sub * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<mul<<"\n";
    }


    return 0;
}
