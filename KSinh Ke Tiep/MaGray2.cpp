#include<bits/stdc++.h>

using namespace std;

string s[10000];
int n;

// chuyen tu gray sang nhi phan
// binary[i] = binary[i-1] so voi gray[i]
// binary đầu tiên là bit đầu tiên của mã nhị phân luôn
// bin = gray[0];
/*
gray       binary
01101  -> 01001
01011   -> 01101
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
		string str,bin =" ";
		cin >> str;
		bin = str[0];
		for(int i = 1 ; i < str.size();i++){
			int n = bin.size()- 1;
			if(bin[n] != str[i]) bin +='1';
			else bin += '0';
		}

		cout<<bin << endl;
	}
	
	return 0;
}
