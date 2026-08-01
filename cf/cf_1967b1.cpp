#include<bits/stdc++.h>
using namespace std;

int main() {
		int t;
		cin >> t;
		while(t--){
		
			long long n, m;
			cin >> n >> m;
			long long ans = -1;

			for(long long b = 1; b <= m; b++){
				ans = ans + (n+b)/(b*b);
			}

			cout << ans << "\n";


	}
}