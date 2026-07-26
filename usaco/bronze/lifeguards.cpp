#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin ("lifeguards.in");
    ofstream fout ("lifeguards.out");
    int n;
    fin >> n;

    vector<pair<int,int>> guards(n);
    for(int i = 0; i < n; i++){
        fin >> guards[i].first >> guards[i].second;
    }

    int best = 0; 
    for(int i = 0; i < n; i++){
        vector<pair<int,int>> intervals;

        for(int j = 0; j < n; j++){
            if(j != i){
                intervals.push_back(guards[j]);
            }
        }

        sort(intervals.begin(), intervals.end());

        int covered = 0;
        int l = intervals[0].first;
        int r = intervals[0].second;

        for(int j = 1; j < intervals.size(); j++){
            if(intervals[j].first <= r){
                r = max(r, intervals[j].second);
            } else{
                covered = covered + r -l;
                l = intervals[j].first;
                r = intervals[j].second;
            }
        }

        covered = covered + r - l;
        best = max(best, covered);
    }

    fout << best << "\n";

}