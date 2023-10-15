#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;

    int height = 0;
    int pos = 0;

    for( i=1; i<=100; i++)
    {
        cin >> n;

        if(n > height)
        {
            height = n;
            pos = i;
        }
    }
    cout<< height <<"\n"<< pos<<"\n";


    return 0;
}
