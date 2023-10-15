#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int> pq;

    while(q--)
    {
        int n;

        cin >> n;

        if(n == 1)
        {
            int in;
            cin >> in;
            pq.push(in);
        }
        else
        {
            cout<<pq.top()<<"\n";
            pq.pop();
        }



    }
    return 0;
}
