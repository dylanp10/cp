#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);	


    int t;
    cin >> t;
    while(t--){

    	string s;
    	cin >> s;

    	int zeropos = -1;
    	for(int i = 0; i < s.size(); i++){

    		if(s[i] == '0'){

    			zeropos = i;
    			break;
    		}
    	}


    	s.erase(s.begin() + zeropos);


    	int(onepos = -1)

    	for(int i = 0; i < s.size(); i++){
    		if(s[i] == '1'){
    			onepos = i;
    			break;
    		}
    	}

    	s.erase(s.begin() + onepos);

    	cout << s << "\n";
    	
    }
}
