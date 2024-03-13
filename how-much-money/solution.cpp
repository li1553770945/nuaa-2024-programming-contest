#include <bits/stdc++.h>
#define MAXN ((int) 1e5)
using namespace std;

int n, m, a[MAXN + 10];

void solve() {
    scanf("%d%d", &n, &m);

    int zero = 0;
    for (int i = 1; i <= m; i++) {
        scanf("%d", &a[i]);
       
    }
    if (n == m) 
    {
        cout<<"1"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else 
    {
        sort(a+1,a+m+1);
        int x  = m-1;
        long long ans = pow(2,m);
        cout<<ans-1<<endl;
        int t = 1;
        for(int i=1;i<=n;i++)
        {
            if(t<=m&&i==a[t])
            {
                ans/=2;
                t++;
            }
            cout<<ans<<" ";
        }
        cout<<endl;

    }
}

int main() {
    int tcase; 
    cin>>tcase;
    while (tcase--) 
    {
        solve();
    }
    return 0;
}