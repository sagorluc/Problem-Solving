#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int a,b;
    cin >> n;

    n=n*100;

    int n1=n;

    cout<< "NOTAS:\n";

    int note[] = {10000, 5000, 2000, 1000, 500, 200};

    int coin[] = {100, 50, 25, 10, 5, 1};



    int rem;
    for(int i=0; i<6; i++)
    {
        a = n1/ note[i];
        rem = n1 % note[i];

        n1 = rem;

        cout<< a << " nota(s) de R$ " << note[i]/100 << ".00" <<"\n";

    }

    cout<< "MOEDAS:\n";

    for(int i=0; i<6; i++)
    {
        //cout<<n1<<endl;
        b = (n1) / coin[i];
        rem = (n1) % coin[i];

        n1 = rem;

        cout<<fixed<<setprecision(2)<< b <<" moeda(s) de R$ "<<(double) (coin[i]/100.00) <<"\n";

    }

    return 0;
}
