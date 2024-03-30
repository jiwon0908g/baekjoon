#include<bits/stdc++.h>
using namespace std;
unsigned long long n;
long long POW(long long a, long long b){long long p=1;for(;b;b/=2,a=(a*a))if(b&1)p=(p*a);return p;}

unsigned long long binary(unsigned long long low,unsigned long long high) {
    unsigned long long mid = (low+high)/2;
    if(high<low) {
        return low;
    }

    if(n<mid*mid) {
        return binary(low, mid-1);
    }
    if(n>mid*mid) {
        return binary(mid+1, high);
    }
    else if(n==mid*mid) return mid;
}

int main() {
    cin >> n;

    cout << binary(0, POW(2, 32));

    return 0;
}
