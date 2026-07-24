#include<bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;

    for(int i = 0; i < cases; i++ ){

        int length;
        cin >> length;

        vector<int> numbers(length);

        for(int j = 0; j < length; j++){
            cin >> numbers[j];
        }


        int sum = 0; 
        for(int j = 0; j < length; j++){

            sum = sum + numbers[j];
            
        }


        if(abs(sum)%4 == 0){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

}