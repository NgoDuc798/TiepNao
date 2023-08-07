#include<bits/stdc++.h>

using namespace std;

bool check ;


void sinh(string &s,int n){
	bool ok = false;
	for(int i = n - 1 ; i >=0 ; i--){
		if (s[i] =='0'){
			ok = true;
			s[i] = '1';
			for(int j = i + 1 ; j < n ;j++) s[j] = '0';
			break;
		}
	}
	if(ok == false) check = true;
}

bool Kiemtra(string s, int n,int k){
	int count = 0;
	for(int i = 0 ; i < n;i++ ){
		if(s[i] =='1'){
			count+= 1;
		}
	}
	if (count == k) return true;
	return false;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		check = false;
		int N,K;
		cin >> N >> K;
		string s = string(N,'0');
		while ( check == false){
			if(Kiemtra(s,N,K))cout << s << endl;
			sinh(s,N);
		}
	}
}