#include<bits/stdc++.h>
using namespace std;

int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    int n;
    cin>>n;
    stack<int> st;
    string str;
    int a;

    for(int i=0;i<n;i++) {
        cin>>str;
        if(str == "push") {
            cin >> a;
            st.push(a);
        }
        else if(!st.empty()&&str == "top") {
            cout << st.top() << "\n";
        }
        else if(str == "size") {
            cout << st.size() << "\n";
        }
        else if(str == "empty") {
            cout << st.empty() << "\n";
        }
        else if(!st.empty()&&str == "pop") {
            cout << st.top() << "\n";
            st.pop();
        }
        else cout << -1 << "\n";
    }

    return 0;
}
