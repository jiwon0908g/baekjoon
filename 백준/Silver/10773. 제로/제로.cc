#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    stack<int> st;
    int cnt = 0;
    int a;

    for(int i=0;i<n;i++) {
        cin >> a;
        if(a == 0) {
            cnt-=st.top();
            st.pop();
        }
        else {
            st.push(a);
            cnt+=a;
        }
    }
    cout << cnt;

    return 0;
}
