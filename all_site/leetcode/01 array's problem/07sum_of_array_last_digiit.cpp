#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    vector<int> v;
    int n = digits.size()-1;
    int sum = 1;


    while(n >= 0)
    {
        if(sum + digits[n] > 9)
        {
            v.push_back((sum + digits[n])%10);
            sum = 1;
        }
        else
        {
            v.push_back(sum + digits[n]);
            sum = 0;
        }

        n--;
    }

    if(sum == 1)
        v.push_back(1);

    reverse(v.begin(), v.end());

    return v;

}
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    vector<int> ans = plusOne(v);

    for(int i=0; i<ans.size(); i++)
        cout<< ans[i] <<" ";
    cout<< "\n";



    return 0;
}
