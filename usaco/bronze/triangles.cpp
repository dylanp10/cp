#include<bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("triangles.in");
    ofstream fout("triangles.out");

    int points;
    fin >> points;
    
    vector<int> pointsx(points);
    vector<int> pointsy(points);
    for(int i = 0; i < points; i++){

        fin >> pointsx[i] >> pointsy[i];


    }

    int maxarea = 0;
    for(int i = 0; i < points; i++){
        for(int j = 0; j < points; j++){
            for(int k = 0; k < points; k++){
                int area = 0;
                if(pointsx[i] == pointsx[j] && pointsy[i] == pointsy[k]){
                    area = abs(pointsy[j] - pointsy[i]) * abs(pointsx[k] - pointsx[i]);
                }
                

                // int area = abs (pointsx[i]*(pointsy[j] - pointsy[k]) + pointsx[j]*(pointsy[k]-pointsy[i]) + pointsx[k]*(pointsy[i] - pointsy[j]) );
                maxarea = max(maxarea, area);


            }
        }
    }
    fout << maxarea;

}