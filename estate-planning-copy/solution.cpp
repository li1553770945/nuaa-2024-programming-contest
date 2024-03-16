#include <bits/stdc++.h>
#define MAXN 100
using namespace std;
typedef pair<int, int> pii;

int n;
long long K;
pii A[MAXN + 10];

void solve() {
    scanf("%d%lld", &n, &K);
    for (int i = 1; i <= n; i++) scanf("%d%d", &A[i].first, &A[i].second);
    // 订单按哪天交付排序
    sort(A + 1, A + n + 1);

    int last = 0;
    long long have = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        // 计算增加的存货量
        have += (A[i].first - last) * K;
        // 判断存货是否足够
        if (have >= A[i].second)
        {
            ans ++;
            have -= A[i].second;
        }
        last = A[i].first;
    }
    cout<<ans<<endl;
}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}