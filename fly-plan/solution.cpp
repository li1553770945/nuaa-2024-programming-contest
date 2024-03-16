#include <bits/stdc++.h>
using namespace std;
struct EDGE {
	int v, next, w;
}e[3000100];
struct node {
	int u, dis;
	bool operator <(const node& t) const {
		return dis > t.dis;
	}

};
int head[3000100];
int dis[3000100];
int cnt;
int n, m, k;
void addedge(int u, int v, int w)
{
	e[++cnt].v = v;
	e[cnt].w = w;
	e[cnt].next = head[u];
	head[u] = cnt;
}
void dj(int s) 
{
	memset(dis, 0x3f3f3f3f, sizeof(dis));
	dis[s] = 0;
	priority_queue <node> q;
	q.push({ s,0 });
	while (!q.empty())
	{
		node tmp = q.top();
		q.pop();
		int d = tmp.dis,u=tmp.u;
		if (d > dis[u])
			continue;
		for (int i = head[u]; i; i = e[i].next)
		{
			int v = e[i].v,w=e[i].w;
			if (dis[v] > d + w)
			{
				dis[v] = d + w;
				q.push({ v,dis[v] });
			}
		}
	}

}
int main()
{
	
	cin >> n>>m>>k;
	int s, t;
	cin >> s >> t;
	for (int i = 1; i <= m; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		addedge(u, v, w);
		addedge(v, u, w);
		for (int j = 1; j <= k; j++)
		{
			addedge(u + (j - 1) * n, v + j * n, 0);
			addedge(v + (j - 1) * n, u + j * n, 0);
			addedge(u + j * n, v + j * n, w);
			addedge(v + j * n, u + j * n, w);
		}
	}
	for (int i = 1; i <= k; i++)
		addedge(t+(i-1)*n, t + i * n, 0);
	dj(s);
    if(dis[t+n*k]==0x3f3f3f3f)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout << dis[t + n * k];
    }
	return 0;
}