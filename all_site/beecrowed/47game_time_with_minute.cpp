#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m1,m2;
    cin >> a >> b >> c >> d;

    m1 = a * 60 + b;
    m2 = c * 60 + d;

    if(m1 < m2)
    {
        int ans = abs(m2 - m1);

        cout<<"O JOGO DUROU "<< ans/60 <<" HORA(S) E "<<"\n"<< ans%60 <<" MINUTO(S)"<<"\n";

    }
    else if(m1 > m2)
    {
        int ans = abs(m2 - m1);

        cout<<"O JOGO DUROU "<< 24 - ans/60 <<" HORA(S) E "<< ans%60 <<" MINUTO(S)"<<"\n";

    }
    else
    {
        int ans = abs(m2 - m1);

        cout<<"O JOGO DUROU "<< ans/60 + 24 <<" HORA(S) E "<< ans%60 <<" MINUTO(S)"<<"\n";
    }





    return 0;
}

/**

7 0 8 0
7 0 7 0
7 0 6 0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    int dif;

    scanf("%d %d %d %d", &a, &c, &b, &d);

    dif = ((b*60)+d) - ((a*60)+c);

    if(dif<=0) dif += 24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);

    return 0;
}


*/
