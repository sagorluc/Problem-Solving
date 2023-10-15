#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char> st;

        for(int i=0; i<s.size(); i++)
        {
            if(st.size() == 0)
                st.push(s[i]);
            else
            {
                char c = st.top();

                if(st.size() >= 1)
                {

                    // checking for RED and BLUE color

                    if((c == 'R' && s[i] == 'B') || (c == 'B' && s[i] == 'R'))
                    {
                        st.pop();

                        if(st.size() >= 1 && st.top() == 'P')
                            st.pop();
                        else
                            st.push('P');

                    }

                    // checking for RED and GREEN color

                    else if((c == 'R' && s[i] == 'G') || (c == 'G' && s[i] == 'R'))
                    {
                        st.pop();

                        if(st.size() >= 1 && st.top() == 'Y')
                            st.pop();
                        else
                            st.push('Y');
                    }

                    // checking for BLUE and GREEN color

                    else if((c == 'B' && s[i] == 'G') || (c == 'G' && s[i] == 'B'))
                    {

                        st.pop();

                        if(st.size() >= 1 && st.top() == 'C')
                            st.pop();
                        else
                            st.push('C');
                    }

                    else
                    {
                        if(st.top() == s[i])
                            st.pop();
                        else
                            st.push(s[i]);

                    }
                }
                else
                    st.push(s[i]);

            }

        }

        string ss;

        while(st.empty() == false)
        {
            ss.push_back(st.top());
                st.pop();
        }

        reverse(ss.begin(), ss.end());

        cout<< ss <<"\n";

    }


    return 0;
}
