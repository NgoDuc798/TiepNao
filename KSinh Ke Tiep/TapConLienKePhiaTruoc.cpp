#include<bits/stdc++.h>

using namespace std;

/*
- Duyệt từ cuối lên đầu nếu gặp phần tử đầu tiên M[i] != M[i-1] + 1;
+ Giảm M[i] xuống 1 đơn vị
+ Nếu phần tử cuối cùng khác n -> tăng từ i+ 1 đếN hết lên 1 đơn vị
  nếu ko thì giữ nguyên
+ Sau khi duyệt mà không thấy phần tử nào M[i] != M[i-1]  + 1 va M[1] = 1
 thì đấy là phần tử 
đầu tiên, in ra phần tử cuối

Nho khai bao truoc arr[0] = 0
*/
void sinhtapconlienkephiatruoc(int arr[],int n,int k){
	int i = k;
    while( i >0 && arr[i] == arr[i-1] + 1)
        i--;
    if( i <= 0 && arr[1] == 1)
    {
        for(int i = 1 ; i <= k ;i++){
            cout<<n-k+i<<" ";
        }
    }
    else
    {
        arr[i]--;
        if(arr[k] != n)
            for(int j = i + 1 ; j<= k ;j++)
                {
                    arr[j]++;    
                }
        for(int i = 1 ; i<= k ;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int T; cin>>T;
    while(T--)
    {
	    int n,k;cin>>n>>k;
        int arr[1000];
        arr[0] = 0;
        for(int i = 1 ; i<=k ; i++){
            cin>>arr[i];
        }
        sinhtapconlienkephiatruoc(arr,n,k);
        cout<<endl;

    }
    return 0;
}
