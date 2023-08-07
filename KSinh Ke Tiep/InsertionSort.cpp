
/*
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {3, 2, 10, 5, 8,4,7};
    int n = sizeof arr /4;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int k = 1;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout<<"Buoc " << k <<": ";
        for(int i = 0 ; i <= k ;i++){
            cout<<arr[i]<<" ";
        }
        k++;
        cout<<endl;
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ;i++ ){
        cin >>arr[i];
    }
    cout<<"Buoc 0: "<<arr[0]<<endl;;
    insertionSort(arr,n);
    return 0;
}