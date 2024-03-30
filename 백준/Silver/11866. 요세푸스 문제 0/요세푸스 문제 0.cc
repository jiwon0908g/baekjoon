#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    queue<int> q;

    for(int i=1;i<=n;i++) {
        q.push(i);
    }
    cout << "<";
    while(q.size()>=1) {
        if(q.size()==1) {
            cout << q.front();
            q.pop();
        }
        else {
            for(int j=0;j<k-1;j++) {
                q.push(q.front());
                q.pop();
            }
            cout << q.front()<<", ";
            q.pop();

        }
    }

        cout << ">";


    return 0;
}
