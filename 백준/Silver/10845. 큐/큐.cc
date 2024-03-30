#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    queue<int> q;
    string str;
    int a;

    for(int i=0;i<n;i++) {
        cin>>str;
        if(str == "push") {
            cin >> a;
            q.push(a);
        }
        else if(!q.empty()&&str == "front") {
            cout << q.front() << "\n";
        }
        else if(str == "size") {
            cout << q.size() << "\n";
        }
        else if(str == "empty") {
            cout << q.empty() << "\n";
        }
        else if(!q.empty()&&str == "pop") {
            cout << q.front() << "\n";
            q.pop();
        }
        else if(!q.empty()&&str == "back") {
            cout << q.back() << "\n";
        }
        else cout << -1 << "\n";
    }

    return 0;
}
