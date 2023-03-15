//
// Created by ASUS on 10/27/2022.
//

#include "no1.h"

#include <iostream>
#include <iomanip>
using namespace std;

float calculateGPA(int n, char scores[], int credits[]){
    float totalScore=0;
    float totalCredit=0;

    for (int i=0; i<n; i++){
        totalCredit += credits[i];
        if (scores[i] == 'A'){
            totalScore += (credits[i] * 4);
        } else if (scores[i] == 'B'){
            totalScore += (credits[i] * 3);
        } else if (scores[i] == 'C'){
            totalScore += (credits[i] * 2);
        } else if (scores[i] == 'D'){
            totalScore += (credits[i] * 1);
        } else if (scores[i] == 'E'){
            totalScore += (credits[i] * 0);
        }
    }

    return totalScore/totalCredit;
}

int main(){
    int n;

    cout << "Input the number N!";
    cin >> n;
    char scores[n];
    int credits[n];

    cout << "Input the scores!";
    for (int i=0; i<n; i++){
        cin >> scores[i];
    }

    cout << "Input the credit values!";
    for (int i=0; i<n; i++){
        cin >> credits[i];
    }

    float result = calculateGPA(n, scores, credits);

    cout << "The GPA = ";
    cout << fixed << setprecision(2) << result;
}
