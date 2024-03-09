#include <bits/stdc++.h>
#define MAXN ((int) 1e5)
using namespace std;

int n, m, A[MAXN + 10];

void solve() {
    scanf("%d%d", &n, &m);

    int zero = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
        if (A[i] == 0) zero++;
    }

    // 特殊情况
    if (n == m) printf("Richman\n");
    else if (zero > m) printf("Impossible\n");
    else {
        m -= zero;
        // 计算前 m - zero 本书的价格之和
        long long sm = 0;
        int i;
        for (i = 1; m > 0; i++) {
            if (A[i] == 0) continue;
            sm += A[i];
            m--;
        }
        // 求剩下 n - m 本书的最小价值
        int mn = 1e9;
        for (; i <= n; i++) if (A[i] > 0) mn = min(mn, A[i]);
        // 输出答案
        printf("%lld\n", sm + mn - 1);
    }
}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}