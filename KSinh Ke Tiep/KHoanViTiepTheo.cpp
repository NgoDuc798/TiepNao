#include<bits/stdc++.h>

using namespace std;

int chuyendoistr_int(char x)
{
    return int(x) - 48;
}

void sinhhoanvi(int arr[], int n){
	int j = n - 1;
	while( j > 0 && arr[j] >= arr[j+1]) 
		j--;
	if( j <= 0){
		cout<< "BIGGEST";
	}
	else
	{
		int k = n;
		while(arr[k] <= arr[j])k--;
		swap(arr[k],arr[j]);
		int dau = j + 1;
		int cuoi = n;
		while(dau < cuoi)
		{
			swap(arr[dau],arr[cuoi]);
			dau++;cuoi--;
		}
		for(int i = 1 ; i <= n ;i++)
		{
			cout<<arr[i]<<"";
		}
	}
}




int main(){
	int oke;
	cin >> oke;
	for(int i = 0 ; i < oke;i++){
		int sothutu;
		string str;
		cin >> sothutu >> str;
		int arr[str.size()+1];
		for(int m = 1 ; m <= str.size(); m++)
		{
			arr[m] = chuyendoistr_int(str[m-1]);
		}
		cout<< sothutu <<" ";
		sinhhoanvi(arr,str.size());
		sothutu++;
		cout<<endl;
	}
	return 0;
}
