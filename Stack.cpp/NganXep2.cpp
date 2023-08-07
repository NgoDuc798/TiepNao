#include<bits/stdc++.h> 
using namespace std;

void solve() { 
    int n; 
    cin >> n; 
    int cnt = 0; 
    string s; 
    stack<int> st; 
    cin.ignore(); 
    while (cin >> s) 
    { 
        if (s == "PUSH") 
        { 
            int m; cin >> m; 
            st.push(m); 
            cin.ignore(); 
        } 
        else if (s == "POP") 
        { 
            if (!st.empty()) 
            { 
                st.pop(); 
            } 
            else continue; 
        } 
        else if (s == "PRINT") 
        { 
            if (!st.empty()) 
            { 
                cout << st.top() << endl; 
            } 
            else cout << "NONE\n"; 
        } 
        ++cnt; 
        if (cnt == n) break; 
    } 
} 
int main(){ 
    solve();  
    return 0;
}