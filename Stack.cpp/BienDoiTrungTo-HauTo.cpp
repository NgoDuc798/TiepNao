#include<bits/stdc++.h>

using namespace std;

int Kiemtra(char ch1 , char ch2)
{
    if(ch2 =='^')
    {
        return 1;
    }
    if(ch2 == '*'  || ch2 == '/' || ch2 == '+' || ch2 == '-')
        if(ch1 == '+' || ch1 == '-' || ch1 =='(' || ch2 == ')')
            return 1;
    return 0;
}

int main()
{
    int T;cin>>T;
    while(T--)
    {
        string str;
        string out;
        stack<char> st1; // luu dau
        cin >> str;
        for(int i = 0 ; i < str.length() ;i++)
        {
            if(str[i] == '+' || str[i] =='-'|| str[i] == '*' ||str[i] =='/' || str[i] == '^' )
            {
                if (st1.empty())
                {
                    st1.push(str[i]);
                }
                else
                {
                    if(Kiemtra(st1.top(),str[i]))
                    {
                        st1.push(str[i]);
                    }
                    else
                    {
                        st1.pop();
                        st1.push(str[i]);
                        out = out + str[i];
                    }
                }
            }
            else if(str[i] == ')')
            {
                while(!st1.empty())
                {
                    if(st1.top() != '(')
                    {
                        out += st1.top();
                    }
                    st1.pop();
                }
            }
            else if(str[i] == '(')
            {
                st1.push(str[i]);
            }
            else
                out += str[i];
        }
        cout<<out;
        cout<<endl;
    }
    return 0;
}