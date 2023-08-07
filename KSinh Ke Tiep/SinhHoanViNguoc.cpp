#include<bits/stdc++.h>

using namespace std;


int main(){
	int T;
	cin >> T;
	while (T--){
	
		int n; cin>>n;
		int arr[n+1];
		int l = 1;
		for(int i = 0; i < n ;i++ ){
			arr[i] = i + 1 ;
			l *= i + 1;
		}
		while (l--){
			//https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/
			prev_permutation(arr,arr+n);
			for(int i = 0 ; i < n ;i++) cout<<arr[i];
			cout<<" ";
		}
	cout<<endl;
	}
	return 0;
}