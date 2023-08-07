#include<bits/stdc++.h>

using namespace std;

bool check;

void sinhtapcon(int arr[],int arr1[],int n,int k){
	int i = k;
	while( i > 0 && arr[i] == n-k+i) i--;
	if(i <= 0){
		cout <<k;
	}
	else{
		arr[i]++;
		for(int j = i + 1 ; j<= k ;j++){
			arr[j] = arr[j-1] +1;
		}
		
		int count = 0;
		for(int i = 1 ; i<= k ; i++)
			for(int j = 1 ; j <= k ;j++)
				if(arr[i] == arr1[j])
					count++;
		cout<< k - count;
	}
}


int main(){
	int T;
	cin >> T;
	while (T--){
		int n,k;
		cin >> n>>k;
		int arr[k+1];
		int arr1[k+1];
		for(int i = 1 ; i <= k ;i++){
			cin >> arr[i];
			arr1[i] = arr[i];
		}
		sinhtapcon(arr,arr1,n,k);
	cout<<endl;
	}
	return 0;
}