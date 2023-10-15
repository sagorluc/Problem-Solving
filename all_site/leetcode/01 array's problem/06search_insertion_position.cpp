#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    // binary search solution
    // time complexity-> O(logn)

    int left = 0;
    int right = nums.size() - 1;
    int mid;

    while(left <= right)
    {
        mid = (left + right)/2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;

}

int main()
{
    int n, tar;
    cin >> n >> tar;

    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    int ans = searchInsert(nums, tar);

    cout<< ans <<"\n";


    return 0;
}
