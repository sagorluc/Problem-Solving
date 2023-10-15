#include<bits/stdc++.h>
using namespace std;

void mergee(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i = m;

    for(int j=0; j<n; j++)
    {
        nums1[i] = nums2[j];
        i++;
    }

    sort(nums1.begin(), nums1.end());

}

int main()
{   int m,n;
    cin >> m >> n;

    vector<int> u(m);
    vector<int> v(n);

    for(int i=0; i<m; i++)
        cin >> u[i];

    for(int i=0; i<n; i++)
        cin >> v[i];

    mergee(u,m,v,n);

    for(auto it : u)
        cout<< it <<" ";

    return 0;
}
