#include<bits/stdc++.h>
using namespace std;
 
stack<int> st;
 
int main(){
    // Thêm các phần tử vào stack
    st.push(1);
    st.push(3);
    st.push(5);
    // Hiện tại stack là [1, 3, 5]
 
    // In ra phần tử ở đỉnh ở trong stack và kích thước stack
    cout << "Phan tu ở đỉnh trong stack la:" << st.top() << endl;
    // ---> 5
    cout << "Kich thuoc hien tai cua stack la:" << st.size() << endl;
    // ---> 3


    // Loại bỏ 1 phần tử ra khỏi stack
    st.pop();
    // stack sẽ thành [1, 3]
 
    // Kiểm tra stack có rỗng không
    if(st.empty()) cout << "Stack rong" << endl;
    else cout << "Stack khong rong" << endl;
}
