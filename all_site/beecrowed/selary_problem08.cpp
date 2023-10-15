#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   double hours;
   double sel;

   cin >> num >> hours >> sel;

    double selary = hours * sel;

    cout<< "NUMBER = "<<num<<"\n"<<"SALARY = U$ "<<fixed<<setprecision(2)<<selary<<"\n";

    return 0;
}
