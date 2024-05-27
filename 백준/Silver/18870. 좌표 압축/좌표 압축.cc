#include<bits/stdc++.h>
using namespace std;

struct coor {
    int ind;
    int nu;
    int res;
};
//파란색 nu
//노란색 ind
//빨간색 res
bool cmp1(coor a, coor b) {
    if(a.nu==b.nu) return a.ind<b.ind;
    return a.nu<b.nu;
}

bool cmp2(coor a, coor b) {
    return a.ind<b.ind;
}

int main() {
    int n;
    cin >> n;
    vector<coor> arr(n);

    for(int i=0;i<n;i++) {
        cin >> arr[i].nu;
        arr[i].ind = i;
    }
    int flag = 0;
    sort(arr.begin(),arr.end(),cmp1);
    arr[0].res = 0;
    for(int i=1;i<n;i++) {
        if(arr[i].nu!=arr[i-1].nu) {
            flag++;
        }
         arr[i].res = flag;
    }

    sort(arr.begin(),arr.end(),cmp2);
    for(int i=0;i<n;i++) {
        cout << arr[i].res << " ";
    }


    return 0;
}
