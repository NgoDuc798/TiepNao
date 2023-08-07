#include<bits/stdc++.h>

using namespace std;

string s[10000];
int n;


/*  gray[i] = binary[i] so với binary[i-1]
binary   gray
 01001	 01101
 01101    01011
*/
/*
0 0   0
1 0   1
0 1   1
1 1   0
*/
int main(){
	int T; cin >> T;
	while(T--)
	{
		string str,gray =" ";
		cin >> str;
		gray = str[0];
		for(int i = 1 ; i < str.size();i++){
			int n = gray.size()- 1;
			if(str[i-1] != str[i]) gray +='1';
			else gray += '0';
		}
		cout<<gray << endl;
	}
	
	return 0;
}
