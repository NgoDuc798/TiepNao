#include<bits/stdc++.h>

/*
- Mảng M[] để lưu dãy số nhập vào
- Mảng N[] để lưu các cấu hình nhị phân
- Với mỗi cấu hình nhị phân mình sẽ so sánh với dãy con nhập vào
	+ Khởi tạo 1 biến sum để lưu tổng dãy con tươnng ứng với mỗi cấu hình nhị phân
*/


using namespace std;


bool check = false;

void sinh(int N[], int n){
	bool ok = false;
	for(int i = n -1 ; i >= 0; i--){
		if(N[i] == 0 ){
			N[i] = 1;
			ok = true;
			for(int j = i + 1 ; j < n ; j++)
			{
				N[j] = 0;
 			}
			break;
		}
	}
	if (ok == false) check = true;
}

bool ktra (int M[],int N[],int n,int K){
	int sum = 0;
	for(int i = 0 ; i < n ;i++){
		if( N[i] == 1) sum += M[i];
	}
	if(sum == K) return true;
	return false;
}

void in(int M[],int N[],int n){
	for(int i = 0 ; i < n ; i++){
		if( N[i] == 1) cout<<M[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n,K;
	cin >> n >> K;
	int M[n];
	for (int i = 0; i < n ;i++)
	{
		cin >> M[i];
	}
	int N[10000] = {0};
	long count = 0;
	while (check == false){
		if (ktra(M,N,n,K)){
			count ++;
			in(M,N,n);
		}
		sinh(N,n);
	}
	cout<< count;

	return 0;
}
