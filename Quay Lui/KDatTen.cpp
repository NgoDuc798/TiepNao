#include<bits/stdc++.h>

using namespace std;
bool check = false;
void XoaPhanTuTrungNhau(string arr[],int &n)
{
    for(int i = 0 ; i < n - 1; i++)
        for(int j = i + 1 ; j < n ;j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j ;k < n - 1 ; k++)
                {
                    arr[k] = arr[k+1];
                }
            n--;
            j--;
            }
            
        }
}

void sinhtapcon(int arr[], int N, int K ){
	//Bước 1: Duyệt từ cuối lên đầu, tìm vị trí đầu tiên chưa đạt max: max ở vị trí i có già là N - K + i
	int i = K;
	while( i > 0 && arr[i] == N - K + i) i--;

	// Bước 2.1: Nếu không tìm được vị trí đó thì đang là tập con cuối, như vậy tập con kế tiếp
	// là tập con đầu tiên
	if ( i <= 0){
		check = true;
	}
	// Bước 2.2: Nếu tìm được thì tăng giá trị chưa đạt max đó lên 1. Các giá trị phía sau 
	// được tính theo công thức : gtSau = gtTruocDo + 1;
	else{
		arr[i]++;
		for(int j = i +1 ; j <= K ;j++)
		{
			arr[j] = arr[j-1]+1;
		}
	}
}


int main()
{

    int N; int K;
    cin >> N >> K;
    string arr[N];
    for(int i = 0 ; i < N ;i++ )
    {
        cin >> arr[i];
    }
    int arr1[N+1];
    sort(arr,arr+N);
    XoaPhanTuTrungNhau(arr,N);
    for(int i = 0 ; i < N ;i++)
    {
        arr1[i+1] = i+1;
    }
    while(check == false)
    {
        for(int i = 0 ; i < K ;i++)
        {
            cout << arr[arr1[i+1] - 1]<<" " ;
        }
        cout<<endl;
        sinhtapcon(arr1,N,K);
    }

    return 0;
}