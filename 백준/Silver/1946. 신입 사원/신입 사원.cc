#include <bits/stdc++.h>
using namespace std;

struct person {
    int score1;
    int score2;
};

bool cmp(person x, person y) {
    return x.score1<y.score1;
}

int main() {
    int t,n,k;
    cin >>t;
    for(int i=0;i<t;i++) {
        cin >> n;
        int cnt=0;
        vector<person> p(n+1);
        for(int i=0;i<n;i++) {
            cin >> p[i].score1>>p[i].score2;
        }
        sort(&p[0],&p[n],cmp);

        int tmp = p[0].score2;
        for(int i=1;i<n;i++) {
            if(p[i].score2<tmp) {
                cnt++;
                tmp = p[i].score2;
            }
        }
        cout << cnt+1 << "\n";

    }


    return 0;
}
