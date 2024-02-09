#include <iostream>
#include <string>
#include <queue>
#include <memory>
#include <stack>
#include <iomanip>
#include <chrono>
#include <unordered_set>

using namespace std;

void printMatrix(string matrix);


int main(){
    string input = "6o485b12793a"; //  o23617284754 27o617384524 6o485b12793a
    
    auto start = chrono::high_resolution_clock::now();

    cout << "\nInput characters: " << input << endl;
    printMatrix(input);

    string goal = input;
    sort(goal.begin(), goal.end());

    cout << "Sorted characters:" << endl;
    printMatrix(goal);

    cout << "----------------------------------------------------------------------------" << endl << endl;
    return 0;
}

void printMatrix(string matrix) {
    const int Rows = 3;
    const int Cols = 4;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            int index = i * Cols + j;
            cout << matrix[index] << ' ';
        }
        cout << endl;
    }
}