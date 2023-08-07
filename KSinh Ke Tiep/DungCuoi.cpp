#include<bits/stdc++.h>

using namespace std;

bool check = false;




void sinhHoanVi(int arr[], int n){
	int j = n -1, k = n;
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





int main()
{
    int n;cin>>n;
    string a[n];
    int a1[n+1];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        a1[i+1] = i + 1;
    }
    string tucuoi; cin >> tucuoi;
    for(int i = 0 ; i < n ;i++)
    {
        if( tucuoi == a[i])
        {
            swap(a[i],a[n-1]);
        }
    }
    sort(a,a + n -1);
    while(check == false)
    {
        for(int i = 0 ; i < n ;i++)
        {
            cout<<a[a1[i+1]-1]<<" ";
        }
        cout<<endl;
        sinhHoanVi(a1,n-1);
    }
}