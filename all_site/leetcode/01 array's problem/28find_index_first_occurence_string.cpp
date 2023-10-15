#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin >> x >> y;

    int n = x.size();
    int m = y.size();
    int found = 1;

    for(int row=0; row<n-m; row++)
    {

        for(int col=0; col<m; col++)
        {
            if(x[row + col] != y[col])
            {
                found = 0;
                break;
            }
        }
        if(found)
            cout<< row <<endl;

    }
    if(found != 1)
        cout<< -1 <<endl;


    return 0;
}
