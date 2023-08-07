#include <bits/stdc++.h>
using namespace std;

void doanlientiep(stack<int> stack1 , int n,vector<int> a, vector<int> a1) {
    for (int i = 0; i < n; i++) {
        while (!stack1.empty() && a[stack1.top()] <= a[i]) {
            stack1.pop();
        }
        if (stack1.empty()) 
        {
            a1[i] = 0;
        }
        else a1[i] = stack1.top() + 1;
        stack1.push(i);
    }
    for (int i = 0; i < n; ++i) {
        cout << i - a1[i] + 1 << " ";
    }
}

//1
//7
//100 80 60 70 60 75 85
// 1  1  1   2 1  4  6
/*
stack1 ={0}
a1[i] = {0}

a1[i] = { 0 , 1}
stack = { 0 , 1}

a1[i] = { 0,1,2}
st = { 0,1,2}

a1[i] = {0,1,2,2}
st ={0,1,3}

a1[i] = { 0,1,2,2,4}
st = {0,1,3,4}

a1[i] = { 0,1,2,2,4,2 }
st ={0,1,5}


  -->  0 - 0 + 1 = 1
        1 - 1 + 1 = 1
        2 - 2 + 1 = 1
        3 - 2 + 1 = 2
        4 - 4 + 1 = 1
        5 - 2 + 1  = 4 
 
*/
int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> a1(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        stack<int> stack1;
        doanlientiep(stack1,n,a,a1);
        cout << endl;
    }
    return 0;
}
