#include <bits/stdc++.h>
#define MAXN ((int) 5e5)
using namespace std;

int n, A[MAXN + 10];

vector<int> B[MAXN + 10];
int LIM[MAXN + 10];
long long f[MAXN + 10];

int head, tail, q[MAXN + 10];

void solve() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &A[i]);
    // 为了方便得到最终答案，可以令 A[n + 1] = 0，然后要求 [n + 1, n + 1] 里建设一座基站，
    // 这样答案就是 f[n + 1] 了
    A[++n] = 0;

    int m; scanf("%d", &m);
    // B[i] 是一个 vector，
    // 里面的负数 -j 表示有一个需求区间是 [i, j]，
    // 里面是正数 j 表示有一个需求区间是 [j, i]，
    // 方便我们等下用双指针算 p_i
    for (int i = 1; i <= n; i++) B[i].clear();
    for (int i = 1; i <= m; i++) {
        int l, r; scanf("%d%d", &l, &r);
        B[l].push_back(-r);
        B[r].push_back(l);
    }
    B[n].push_back(-n);
    B[n].push_back(n);

    // now 记录了双指针区间 [j, i] 中有几个完整的需求区间
    int now = 0;
    for (int i = 1, j = 1; i <= n; i++) {
        // 双指针右端点移动一步，增加右端点为 i 且位于 [j, i] 里的需求区间
        for (int x : B[i]) if (x > 0 && x >= j) now++;
        // 求出 j = p_i + 1
        while (now > 0 && j <= i) {
            // 双指针左端点移动一步，减少左端点为 j 且位于 [j, i] 里的需求区间
            for (int x : B[j]) if (x < 0 && -x <= i) now--;
            j++;
        }
        assert(now == 0);
        // LIM[i] = p_i
        LIM[i] = j;
    }

    // dp 初值
    f[0] = 0;
    f[1] = A[1];
    // 用 dp 初值初始化单调队列
    head = tail = 1;
    q[tail++] = 0;
    q[tail++] = 1;

    for (int i = 2; i <= n; i++) {
        // 要求上一个基站的位置 >= p_{i - 1} - 1
        int lim = LIM[i - 1] - 1;
        while (q[head] < lim) head++;
        f[i] = f[q[head]] + A[i];
        while (head < tail && f[q[tail - 1]] >= f[i]) tail--;
        q[tail++] = i;
    }
    printf("%lld\n", f[n]);
}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}