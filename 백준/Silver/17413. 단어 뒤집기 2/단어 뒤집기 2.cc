#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int flag = 0;

    stack<char> st;
    for(int i=0;i<s.size();i++) {

        if(s[i]=='<')  {
            flag = 1;
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
        if(flag == 1) {
            cout << s[i];
            if(s[i]=='>') flag = 0;
        }



        else if(s[i] == ' ') {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
        else st.push(s[i]);
    }

    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}
