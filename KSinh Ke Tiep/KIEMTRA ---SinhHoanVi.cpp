#include<bits/stdc++.h>

using namespace std;

bool check ;

void sinhHoanVi(int arr[], int n){
	int j = n -1, k = n;
	while(arr[j] > arr[j+1] && j > 0) j--;
	// chỉ số j đầu tiên thoả mãn arr[j] < arr[j+1]
	//12345 12354 12435 12453 12534 12543 13245 13254 13425 13452 13524
	if(j <= 0){
		check = true;
	}
	else{
		// trong day ben phai arr[j], tim arr[k] la so nho nhat ma van lon hon arr[j]
		while(arr[k] < arr[j]) k--; 
		//doicho
		swap(arr[k],arr[j]);
		int l = j +1 , r = n;
		while ( l < r){
			swap(arr[l],arr[r]);
			l++;r--;
		}
	}
}

void in(int arr[],int n){
	for(int i = 1 ; i <= n ;i++) cout<<arr[i]<<"";
	cout<<" ";
}


int main(){
	int T;
	cin >> T;
	while (T--){
		check = false;
		int n; cin>>n;
		int arr[n+1];
		for(int i = 1 ; i <= n ;i++ ){
			arr[i] = i;
		}
		while (check == false){
			in(arr,n);
			sinhHoanVi(arr,n);
		}
	cout<<endl;
	}
	return 0;
}