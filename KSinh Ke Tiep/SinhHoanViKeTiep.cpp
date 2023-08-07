#include<bits/stdc++.h>

using namespace std;

bool check ;

void sinhHoanViKeTiep(int arr[], int n){
	int j = n -1 , k = n;
	while(arr[j] > arr[j+1] && j > 0) j--;
	if(j <= 0){
		check = true;
	}
	else{
		while(arr[k] < arr[j]) k--;
		swap(arr[k],arr[j]);
		int l = j +1 , r = n;
		while ( l < r){
			swap(arr[l],arr[r]);
			l++;r--;
		}
	}

}

void in(int arr[],int n){
	for(int i = 1 ; i <= n ;i++) cout<<arr[i]<<" ";
	cout<<" ";
}


int main(){
	int T;
	cin >> T;
	while (T--){
		check = false;
		int n; cin>>n;
		int arr[n+1];
		for(int i = 1 ; i <= n ;i++){
			cin >> arr[i];
		}
		sinhHoanViKeTiep(arr,n);
		if(check == false)
			in(arr,n);
		else{
			for(int i = 1 ; i <= n ;i++)
				cout<<i<<" ";
		}
	cout<<endl;
	}
	return 0;
}