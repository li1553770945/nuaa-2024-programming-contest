#include <iostream>
#include <cstring>
using namespace std;

int a[100010];
int b[100010];
int f[100010];

void solve() {
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int m;
        cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
    }

    for(int i=m;i>=1;i--)
    {
        if(f[b[i]]==0)
        {
            cout<<b[i]<<" ";
            f[b[i]] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(f[a[i]]==0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;

}

int main() {
    int tcase; scanf("%d", &tcase);
    while (tcase--) solve();
    return 0;
}