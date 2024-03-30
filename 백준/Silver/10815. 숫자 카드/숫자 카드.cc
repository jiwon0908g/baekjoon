#include<bits/stdc++.h>
using namespace std;
long long int n;
vector<long long int> ar1;

long long int binary(long long int v,long long int low,long long int high) {
    long long int mid = (low+high)/2;
    if(high<low) return 0;
    else {
        if(v>ar1[mid]) {
            return binary(v,mid+1,high);
        }
        else if(v<ar1[mid]) {
            return binary(v,low,mid-1);
        }
        else return 1;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    ar1.resize(n);
    for(int i=0;i<n;i++) {
        cin >> ar1[i];
    }
    int m;
    cin >> m;
    sort(ar1.begin(), ar1.end());

    int ar2;
    for(int i=0;i<m;i++) {
        cin >> ar2;
        cout << binary(ar2,0,n-1)<<" ";
    }

    return 0;
}
