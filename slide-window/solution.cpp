#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int Max1[1000001], Min1[1000001];
deque <int> Max;
deque <int> Min;
int a[1000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	int ma = 0, mi = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < k; i++)
	{
		while (!Max.empty() && a[i] > Max.back())
			Max.pop_back();
		Max.push_back(a[i]);
		while (!Min.empty() && a[i] < Min.back())
			Min.pop_back();
		Min.push_back(a[i]);

	}
	Min1[mi++] = Min.front();
	Max1[ma++] = Max.front();
	for (int i = k; i < n; i++)
	{
		if (Max.front() == a[i-k])
			Max.pop_front();
		if (Min.front() == a[i-k])
			Min.pop_front();
		while (!Max.empty() && a[i] > Max.back())
			Max.pop_back();
		Max.push_back(a[i]);
		while (!Min.empty() && a[i] < Min.back())
			Min.pop_back();
		Min.push_back(a[i]);
		Max1[ma++] = Max.front();
		Min1[mi++] = Min.front();
	}
	for (int i = 0; i < mi; i++)
		cout << Min1[i] << " ";
	cout << endl;
	for (int i = 0; i < ma; i++)
		cout << Max1[i] << " ";
	return 0;
}