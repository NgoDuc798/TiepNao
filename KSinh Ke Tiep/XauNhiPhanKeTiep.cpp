#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinhketiep(string str, int n){
    bool ok = false;
    for(int i = n -1 ; i >= 0 ; i--){
        if(str[i] =='0'){
            ok = true;
            str[i] ='1';
            for(int j = i+1 ; j < n ; j++)
                str[j] ='0';
        break;
        }
    }
    if(ok == false) cout << string(n,'0')<<endl;
    else cout << str <<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        sinhketiep(str,str.length());
    }
}
