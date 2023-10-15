#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int cnt = 0;

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] != val)
        {
            nums[cnt] = nums[i];
            cnt++;
        }

    }
    return cnt;
}
int main()
{
    int n,val;
    cin >> n >> val;

    vector<int>v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    int ans = removeElement(v,val);

    cout<< ans <<"\n";



    return 0;
}
