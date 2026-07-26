#include<bits/stdc++.h>
using namespace std;

int main() {


    ifstream fin ("guess.in");
    ofstream fout ("guess.out");

    int n;
    fin >> n;
    vector<string> animals(n);
    vector<int> charnum(n);
    vector<vector<string>> character(n);

    for(int i = 0; i < n; i++){
        fin >> animals[i];
        fin >> charnum[i];
        for(int j = 0; j < charnum[i]; j++){
            string temp;
            fin >> temp;
            character[i]. push_back(temp);
        }
    }

    int answer = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){


            int same = 0;
            for(int a = 0; a < character[i].size(); a++){
                for(int b = 0; b< character[j].size(); b++){
                    

                    if(character[i][a] == character[j][b]){
                        same++;
                    }
                }
            }

            if(same + 1 > answer){
                answer = same + 1;
            }
        }
    }

    fout << answer;


}