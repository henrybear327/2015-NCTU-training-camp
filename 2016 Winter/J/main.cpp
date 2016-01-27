#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fast_pow(ll x, ll n, ll M) {
    ll result = 1;
    ll base = x;

    while (n != 0) { // 從尾端一個一個拆解出位元
        if (n & 1)
            result = result * base % M;
        base = base * base % M;
        n >>= 1LL; // 即 n /= 2
    }

    return result;
}

int main()
{
    int ncase;
    scanf("%d", &ncase);

    while(ncase--) {
        int num;
        scanf("%d", &num);
        
        printf("%lld\n", fast_pow(3, num, 100000007) - 1LL);
    }
    return 0;
}