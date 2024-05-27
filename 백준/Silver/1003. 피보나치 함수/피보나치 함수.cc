#include<bits/stdc++.h>
using namespace std;
/*
int f(long long n) {
    if(n==0) {
        cnt1++;
        return 0;
    }
    else if(n==1) {
        cnt2++;
        return 1;
    }
    return f(n-1) + f(n-2);
}
*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,t;
    cin >> t;

    vector<int> z(41);
    vector<int> o(41);
    z[0] = 1;
    z[1] = 0;
    o[0] = 0;
    o[1] = 1;

    for(int i=2;i<=40;i++) {
        z[i] = z[i-2] + z[i-1];
        o[i] = o[i-2] + o[i-1];
    }

    for(long long j=0;j<t;j++) {
        cin >> n;
        cout << z[n]<<" "<<o[n]<<"\n";
    }

    return 0;
}
