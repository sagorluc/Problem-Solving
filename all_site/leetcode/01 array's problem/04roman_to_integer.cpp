#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
   unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10},
    {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int res = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(i+1 < s.length() && roman[s[i]] < roman[s[i+1]])
           res = res - roman[s[i]];
        else
           res = res + roman[s[i]];

    }

    return res;

}

int main()
{
    string s;
    cin >> s;

    int ans = romanToInt(s);

    cout<< ans <<"\n";


    return 0;
}
