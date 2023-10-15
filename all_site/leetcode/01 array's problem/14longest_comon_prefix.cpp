#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    sort(strs.begin(), strs.end());
    int a = strs.size()-1;
    string n = strs[0];
    string m = strs[a];
    string ans = "";

    for(int i=0; i<n.size(); i++)
    {
        if(n[i] == m[i])
            ans += n[i];
        else
            break;

    }
    return ans;

}

int main()
{
    vector<string> st;
    int num_s;
    cin >> num_s;
    for(int i=0; i<num_s; i++)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }

    cout<<longestCommonPrefix(st)<<"\n";


    return 0;
}
