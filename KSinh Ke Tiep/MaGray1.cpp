#include<bits/stdc++.h>

using namespace std;

string s[10000];
int n;
/*
ma gray thu 1
0
1
ma gray thu 2
00
01
11
10
ma gray thu 3
000
001
011
010

110
111
101
100


*/

int main(){
	int T; cin >> T;
	while(T--)
	{
		cin>>n;
		int l = pow(2,n); // số lượng mã của gray thứ n
		// khởi tạo gray thứ 1
		s[1] = '0';
		s[2] = '1';
		if( n > 1)
		{
			int vt = 2; // vị trí lấy đối xứng
			// lần lượt tính các gray
			for(int i = 2 ; i <= n ; i++){
				int k = pow( 2,i); // số lượng mã gray thứ i 
				for(int j = 1 ;j <= vt ;j++)
				{
					s[k-j+1] = '1' + s[j];
					s[j] = '0' + s[j];
				}
				vt = k; 
			}
		}
		for(int j = 1 ; j <= l ; j++) cout<<s[j] <<" ";
		cout<<endl;
	}
	
	return 0;
}
