#include<bits/stdc++.h>
using namespace std;

int main() {

    cin >> runs;
    for(int i = 0; i < runs; i++){

        int y;
        int x;
        cin >> y >> x;
        if(y&x==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}