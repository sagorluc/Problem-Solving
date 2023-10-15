#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >>y;

    double item[] = {4.00, 4.50, 5.00, 2.00, 1.50};


    cout<<fixed<<setprecision(2)<<"Total: R$ "<< item[x - 1] * y <<"\n";


    return 0;
}
