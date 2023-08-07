#include<bits/stdc++.h>

using namespace std;

bool check;

int sinh(string &str, int n){
    bool ok = false;
    for(int i  = n -1 ; i >= 0 ;i--){
        if(str[i] == 'A'){
            str[i] ='B';
            ok = true;
            for(int j = i + 1 ; j < n ;j++){
                str[j] ='A';
            }
            cout<<str<<" ";
            break;
        }
    }
    
    if(ok == false) return -1;
    else
        return sinh(str,n);
}


int main(){
    int T; cin>>T;
    while(T--){
        check = false;
        int n;
        cin >> n;
        string str = string(n,'A');
        cout<<str<<" ";
        sinh(str,n);
    cout<<endl;
    }
}