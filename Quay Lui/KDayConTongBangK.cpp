#include<bits/stdc++.h>

using namespace std;

bool check = false;
void sinhnhiphan(int arr[],int n)
{
    bool ok = false;
    for(int i = n  ; i >= 1 ; i--)
    {
        if(arr[i] == 0)
        {
            arr[i] = 1;
            ok = true;
            for(int j = i + 1 ; j <= n ; j++)
            {
                arr[j] = 0;
            }
            break;
        }
    }
    if(ok == false) check = true;
}

int KiemTra(int A[],int A1[],int N,int K)
{
    int sum = 0;
    for(int i = 1 ; i <= N ;i++)
    {
        if(A1[i] == 1) sum += A[i];
    }
    if(sum == K) return 1;
    else return 0;
}

int main()
{
    int T;cin >> T;
    while(T--)
    {
        check = false;
        int N,K;cin >> N >> K;
        int A[N+1];
        
        int A1[N+1] = {0};
        for(int i = 1 ; i <= N ; i++){
            cin >> A[i];
        }
        sort(A+1,A+N+1);
        vector<int> adj[1001];
        int count = 1;
        while(check == false)
        {
            if(KiemTra(A,A1,N,K))
            {
              for(int i = 1 ; i <= N ;i++)
              {
                if(A1[i] ==1)
                {
                    adj[count].push_back(A[i]);
                }
              }
              count++;
            }
            sinhnhiphan(A1,N);
        }


        if(count == 1)
        {
            cout<<"-1";
        }
        else
        { 
            for(int i = count - 1 ; i >= 1 ;i--)
            {
                cout<<"[";
                for(int v : adj[i])
                {
                    if( v != adj[i].back())   
                        cout << v <<" ";
                    else
                        cout<< v ;
                }
                cout<<"] ";
            }
        }
        cout<<endl;
    }
    return 0;
}