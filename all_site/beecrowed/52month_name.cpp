#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n >=1 && n <= 12)
    {
        if(n == 1)
            cout<<"January\n";
        else if(n == 2)
            cout<<"February\n";
        else if(n == 3)
            cout<<"March\n";
        else if(n == 4)
            cout<<"April\n";
        else if(n == 5)
            cout<<"May\n";
        else if(n == 6)
            cout<<"June\n";
        else if(n == 7)
            cout<<"July\n";
        else if(n == 8)
            cout<<"August\n";
        else if(n == 9)
            cout<<"September\n";
        else if(n == 10)
            cout<<"October\n";
        else if(n == 11)
            cout<<"November\n";
        else if(n == 12)
            cout<<"December\n";
    }

    return 0;
}
