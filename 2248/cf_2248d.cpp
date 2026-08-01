#include<bits/stdc++.h>
using namespace std;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	

	int t;
	cin >> t;
	while(t--){

		int n, q;
		cin >> n >> q;

		string s, t;
		cin >> s >> t;

		vector<int> diffprefix(n+1, 0);
		vector<int> sameprefix(n+1, 0);

		for(int i = 1; i <= n; i++){


			int change = 0;
			int same = 0;


			if(s[i-1] == '1' && t[i-1] == '0'){

				change = 1;



			} else if(s[i-1] == '0' && t[i-1] == '1'){




			    change = -1;
			}
			else{


			    same = 1;
			}

			diffprefix[i] = diffprefix[i-1] + change;
			sameprefix[i] = sameprefix[i-1] + same;
		}

		while(q--){


			int l, r;
			cin >> l >> r;



			int different = diffprefix[r] - diffprefix[l-1];



			int match = sameprefix[r] - sameprefix[l-1];

			if(abs(different) <= match){
				cout << "yes\n";
			} else {
				cout << "no\n";
			}
		}

	}	
}