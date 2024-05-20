#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,b;
    string a;

    cin >> m;
    vector<int> arr(22);
    for(int i=0;i<m;i++) {
        cin >> a;
        if(a=="all") {
            for(int j=1;j<=20;j++) {
                arr[j] = 1;
            }
        }
        else if(a=="empty") {
            for(int j=1;j<=20;j++) {
                arr[j] = 0;
            }
        }
        else {
            cin >>b;
            if(a=="add") {
                arr[b] = 1;
            }
            if(a=="remove") {
                if (arr[b]==1) arr[b]=0;
            }
            if(a=="check") {
                if(arr[b]==1) cout << 1<<"\n";
                else cout << 0<<"\n";
            }
            if(a=="toggle") {
                if(arr[b]==1) arr[b]=0;
                else arr[b] =1;
            }
        }
        /*
        cout <<"i : " << i <<'\n';
        for(int j=0;j<20;j++) {
            cout << arr[j]<<" ";
        }
        cout << "\n";
        */
    }
    return 0;
}
