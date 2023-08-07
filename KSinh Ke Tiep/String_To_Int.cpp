#include<bits/stdc++.h>

using namespace std;

bool check;

int num(char x)
{
    return x - '0';
}

/*
int chuyendoistr_intcach2(char x)
{
    return int(x) - 48;
}
*/


int intValue(string  s){
    int res = 0;
    for(int i=0;i<s.size();i++) res = res*10 + num(s[i]);
    return res;
}


int main(){
    string str ="90";
    cout<<intValue(str);
    return 0;
}