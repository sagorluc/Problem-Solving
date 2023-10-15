#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums)
{

    set<int> s;

    for(int i=0; i<nums.size(); i++)
        s.insert(nums[i]);

    int ans = s.size();
    nums.clear(); // clear nums all old element

    for(auto i : s)
        nums.push_back(i);
    return ans;


}
int main()
{
    int n;
    cin >> n;

    vector<int> num(n);

    for(int i=0; i<n; i++)
        cin >> num[i];

    int ans = removeDuplicates(num);

    cout<<ans<<"\n";

    return 0;
}

//int i = 0;
//for(int j = 1; j < nums.size(); j++)
//{
//    if(nums[i] != nums[j])
//    {
//        nums[i+1] = nums[j];
//        i++;
//    }
//}
//return (i+1);

