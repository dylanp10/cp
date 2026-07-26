#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin ("circlecross.in");
    ofstream fout("circlecross.out");

    string s;
    fin >> s;

    int answer = 0;

    for(int i = 0; i < 52; i++){
        for(int j = i+1; j < 52; j++){
            if(s[i] == s[j])
                continue;
            
                int first = -1;
                int second = -1;

                for(int k = 0; k < 52; k++){
                    if(s[k] == s[j]){
                        if(first == -1)
                            first = k;
                        else
                            second = k;
                        
                    }
                }
            
            if(i < first && first < j && j < second)
                answer++
        }
    }

    cout << answer/2;
}