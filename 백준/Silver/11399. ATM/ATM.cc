#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);

    for(int i=0;i<n;i++) {
        cin >> p[i];
    }

    sort(&p[0],&p[n]);
    int cnt=0;

    vector<int> res(n+1);

    res[0] = p[0];
    int tmp = p[0];
    for(int i=1;i<n;i++) {
        tmp+=p[i];
        res[i]+=tmp;
    }

    int result=0;
    for(int i=0;i<n;i++) {
        result+=res[i];
    }

    cout << result;

    return 0;
}
