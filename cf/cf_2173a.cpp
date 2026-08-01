#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--){

		int n, k;
		string s;
		cin >> n >> k >> s;
		int awake = -1;

		int sleep = 0;

		for(int i = 0; i < n; i++){

			if(s[i] == '1'){
				awake = max(awake, i+k);
			} else {
				if(i > awake){
					sleep++;
				}
			}

			
		}
		
		cout << sleep << "\n";


	}
}