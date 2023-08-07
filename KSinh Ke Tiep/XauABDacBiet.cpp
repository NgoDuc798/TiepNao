#include<bits/stdc++.h>

using namespace std;

bool check;

void sinhnhiphan(string &str, int n){
	bool ok = false;
	for(int i = n - 1 ; i >= 0 ; i--){
		if(str[i] =='A'){
			ok = true;
			str[i] ='B';
			for(int j = i + 1 ; j< n ;j++){
				str[j] = 'A'; 
			}
		break;
		}
	}
	if( ok == false) check = true;
}

bool kiemtra(string str, int k){
	string str_moi = 'B' + str + 'B';
	for(int i = 0 ; i < str_moi.size() - k - 1 ; i++){
		if(str_moi[i] =='B' && str_moi[i + k + 1 ]  == 'B'){
			int d = 0;
			for(int j = i + 1 ; j <= i + k ;j++)
			{
				if(str_moi[j] =='A'){
					d++;
				}
			}
			if( d == k)
			{
				return 1;
			}
		}
	}
	return 0;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k; cin >> n >> k;
	string str = string(n,'A');
	check == false;
	int count = 0;
	queue<string> q;
	while(check == false){
		if(kiemtra(str,k))
		{
			q.push(str);
		}
		sinhnhiphan(str,n);
	}
	cout<<q.size()<<endl;
	while(q.size()){
		cout<< q.front()<<endl;
		q.pop();
	}
	return 0;
}