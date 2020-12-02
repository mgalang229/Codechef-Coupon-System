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
	int c1=INT_MAX, d1=0, c2=INT_MAX, d2=0, c3=INT_MAX, d3=0;
	for(int i=0; i<n; ++i) {
		int c, l, x;
		cin >> c >> l >> x;
		if(l==1) {
			if(x>d1) {
				d1=x;
				c1=c;
			} else if(x==d1&&c<c1) {
				d1=x;
				c1=c;
			}
		} else if(l==2) {
			if(x>d2) {
				d2=x;
				c2=c;
			} else if(x==d2&&c<c2) {
				d2=x;
				c2=c;
			}
		} else {
			if(x>d3) {
				d3=x;
				c3=c;
			} else if(x==d3&&c<c3) {
				d3=x;
				c3=c;
			}
		}
	}
	cout << d1 << " " << c1 << "\n";
	cout << d2 << " " << c2 << "\n";
	cout << d3 << " " << c3 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
