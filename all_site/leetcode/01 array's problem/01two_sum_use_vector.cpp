#include<bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int> v, int t)
{
    for(int i=0; i<v.size()-1; i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if((v[i] + v[j] == t))
                return {i,j};
        }
    }
    return {};

}
int main()
{
    int n,t;
    cin >> n >> t;

    vector<int> v(n);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    vector<int> ans = two_sum(v,t);

    for(int i=0; i<ans.size(); i++)
        cout<< ans[i]<<" ";


    return 0;
}
