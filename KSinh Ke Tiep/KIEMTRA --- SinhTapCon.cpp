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

void SapXep(int arr[], int n){
	for(int i = 1 ; i <= n ;i++){
		for(int j = i + 1 ; j <= n ;j ++){
			if(arr[i] > arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
}

void in(int arr[],int arr1[], int k){
	for(int i = 1 ; i <= k;i++){
		cout<<arr1[arr[i]] <<" "; // chú ý chỗ này
	}
	cout<<endl;
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
	SapXep(arr1,n);
	int dau = 1;
	int cuoi = n;
	while(dau < cuoi){
		if(arr1[dau] == arr1[dau+1]){
			for(int j = dau + 1 ; j < cuoi ; j++ ){
				arr1[j] = arr1[j+1];
			}
			cuoi--;
		}
		else{
			dau++;
		}
	}
	// hàm arr1 để loại bỏ các số trùng nhau
	// hàm arr để sắp xếp riêng , lấy chỉ số
	// khi thì arr1[arr[i]]
	for(int i = 1 ; i <= k ;i ++){
		arr[i] = i;  // chỗ này
	}
	while(check == false){
		in(arr,arr1,k);
		sinhtapcon(arr,cuoi,k);
	}
	
	return 0;
}