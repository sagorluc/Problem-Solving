#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2;
    cin >> r1 >> r2;

    int sum = (r1 * 6) + (r2 * 4);
    int div = sum / 5;
    int avg = div / 2;

    cout<< avg <<"\n";

    return 0;
}
