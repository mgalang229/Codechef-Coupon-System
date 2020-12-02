#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	int n;
	cin >> n;
	pair<int, int> p[3];
	bool vis[3];
	memset(vis, 0, sizeof(vis));
	for(int i=0; i<n; ++i) {
		int c, l, x;
		cin >> c >> l >> x, --l;
		if(!vis[l]) {
			p[l]=make_pair(c, x);
			vis[l]=1;
		} else {
			if(x>p[l].second)
				p[l]=make_pair(c, x);
			else if(x==p[l].second&&c<p[l].first)
				p[l].first=c;
		}
	}
	for(int i=0; i<3; ++i)
		cout << p[i].second << " " << p[i].first << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
