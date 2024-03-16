#include <bits/stdc++.h>
#define MAXN ((int) 2e5)
using namespace std;

int n, K;
char s[MAXN + 10];

bool check(int L) {
    int cnt = 0;
    for (int i = 1; i <= n; ) {
        // 位置 i 的灯是亮的，进行关灯操作
        if (s[i] == '1') cnt++, i += L;
        // 位置 i 的灯是灭的，不操作
        else i++;
    }
    return cnt <= K;
}

void solve() {
    scanf("%d%d%s", &n, &K, s + 1);
    // 二分答案
    int head = 1, tail = n;
    while (head < tail) {
        int mid = (head + tail) >> 1;
        if (check(mid)) tail = mid;
        else head = mid + 1;
    }
    printf("%d\n", head);
}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}