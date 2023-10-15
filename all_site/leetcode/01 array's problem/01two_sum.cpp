#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin >> n >> target;

    int nums[n] = {0};

    int a, b;

    for(int i=0; i<n; i++)
        cin >> nums[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                a = i;
                b = j;
            }
        }
    }

    cout<<"["<<a<<","<<b<<"]\n";


    return 0;
}
