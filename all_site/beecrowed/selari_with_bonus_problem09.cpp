#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    double salari;
    double bonus;

    cin >> salari >> bonus;


    double div = bonus / 100;
    double mul = div * 15;
    double sum = mul + salari;


    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<sum<<"\n";

    return 0;
}
