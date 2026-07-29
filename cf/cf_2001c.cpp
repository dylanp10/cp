#include<bits/stdc++.h>
using namespace std;

int query (int a, int b){

    cout << "? " << a << " " << b << "\n";
    cout.flush();
    int x;

    if(!(cin >> x)){
        exit(0);
    }
    if(x == -1){
        exit(0);
    }

    return x;

}

int main() {

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        vector<int> parent(n+1, 0);

        for(int v = 2; v <= n; v++){


            int current = 1;
            while(true){

                int next = query(current, v);
                if(next = current){
                    parent[v] = current;
                    break;
                }

                current = next;
            }
        }


        cout << "!";
        for(int v = 2; v <= n; v++){

            cout << " " << parent[v] << " " << v;
        }
        cout << "\n";
        cout.flush();
    }



}