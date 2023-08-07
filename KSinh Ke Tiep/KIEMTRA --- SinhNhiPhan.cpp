#include<bits/stdc++.h>

/*
*Sinh nhị phân kế tiếp:
	- Duyệt từ cuối dãy lên đầu dãy
	- Nếu gặp phần tử 0 đầu tiên-> cho phần tử đó bằng 1 và tất cả các phần tử phia sau
	bằng 0
	- Nếu duyết tất cả phần tử mà không có phần tử nào bằng 0 
	-> cấu hình cuối cùng -> kết thúc

*/
using namespace std;

bool check = false;
void sinhnhiphan(int M[], int n){
	bool ok = false;
	for(int i = n-1 ; i >= 0 ; i--)
	{
		if(M[i] == 0){
			ok = true;
			M[i] = 1;
			for (int j = i + 1; j < n ;j++){
				M[j] = 0;
			}
			break;
		}
	}
	if ( ok == false) check = true;
}

bool ktra (int M[],int n){
	for (int i = 0 ; i < n ;i++)
	{
		if (M[i] != M[n-1-i])
		{
			return false;
		}
	}
	return true;
}
int main() {
	long n;
	int M[100] ={0};
	cin >> n;
	while (check == false){
		if (ktra(M,n))
		{
			for(int i = 0 ; i < n ;i ++)
				cout<< M[i] <<" ";
			cout<<endl;
		}
		sinhnhiphan(M,n);
	}
}
