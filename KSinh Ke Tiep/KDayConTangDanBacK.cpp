#include<bits/stdc++.h>

using namespace std;

bool check;

void sinhtapcon(int arr[],int n,int k){
	int i = k;
	while(arr[i] == n - k + i && i > 0){
		i--;
	}
	if( i <= 0){
		check = true;
	}
	else{
		arr[i]++;
		for(int j = i + 1 ; j <= k ; j++){
			arr[j] = arr[j-1]  + 1;
		}
	}
}

void in(int arr[],int arr1[], int k){
	for(int i = 1 ; i <= k;i++){
		cout<<arr1[arr[i]] <<" "; // chú ý chỗ này
	}
	cout<<endl;
}

bool kiemtra(int arr[],int arr1[],int k){
	for(int i = 1 ; i< k ;i++){
		if(arr1[arr[i]] >= arr1[arr[i+1]]){
				return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n,k; cin >> n>>k;
	int arr[n+1];
	int arr1[n+1];
	for(int i = 1 ; i <= n ; i++){
		cin >> arr1[i];
	}
	// hàm arr1 để loại bỏ các số trùng nhau
	// hàm arr để sắp xếp riêng , lấy chỉ số
	// khi thì arr1[arr[i]]
	for(int i = 1 ; i <= k ;i ++){
		arr[i] = i;  // chỗ này
	}
	int count = 0;
	while(check == false){
		if(kiemtra(arr,arr1,k)) 
		{
			count++;
		}
		sinhtapcon(arr,n,k);
	}
	cout<<count;
	return 0;
}