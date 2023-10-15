#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    cin >> r;

   long double  ans = (4.0/3) * 3.14159 * pow(r,3);

    cout<< fixed <<setprecision(3) << "VOLUME = " << ans <<"\n";


    return 0;
}
