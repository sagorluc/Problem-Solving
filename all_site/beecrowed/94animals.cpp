#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;

    int total = 0;
    int coelho = 0;
    int rato = 0;
    int sapo = 0;

    while(t--)
    {
        cin >> n;
        char s;
        cin >> s;

        total = total + n;

        if( s == 'C')
            coelho = coelho + n;
        if(s == 'R')
            rato = rato + n;
        if(s == 'S')
            sapo = sapo + n;

    }

    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<coelho<<"\n";
    cout<<"Total de ratos: "<<rato<<"\n";
    cout<<"Total de sapos: "<<sapo<<"\n";

    double co = ((double)coelho/total) * 100.00;
    double ra = ((double)rato/total) * 100.00;
    double sa = ((double)sapo/total) * 100.00;

    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<co<<" %\n";
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<ra<<" %\n";
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<sa<<" %\n";


    return 0;
}
