#include <iostream>
#include <string>
#include <queue>
#include <memory>
#include <stack>
#include <iomanip>
#include <chrono>
#include <unordered_set>

using namespace std;

class Node {
public:
    string data;
    shared_ptr<Node> parent;
    string action;
    int level;

    Node(string data, shared_ptr<Node> parent, string action, int level) : data(data), parent(parent), action(action), level(level) {}
};

void printMatrix(string matrix);
void solvePuzzle_bfs(string input, string goal); 
int main()
{
    string input = "6o485b12793a"; //  o23617284754 27o617384524 6o485b12793a

    auto start = chrono::high_resolution_clock::now();

    cout << "\nInput characters: " << input << endl;
    printMatrix(input);

    string goal = input;
    sort(goal.begin(), goal.end());

    cout << "Sorted characters:" << endl;
    printMatrix(goal);

    cout << "----------------------------------------------------------------------------" << endl
    << endl;
    solvePuzzle_bfs(input, goal);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    cout << "Total execution time: " << elapsed.count() << " seconds" << endl;

    return 0;
}

void printMatrix(string matrix)
{
    const int Rows = 3;
    const int Cols = 4;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            int index = i * Cols + j;
            cout << matrix[index] << ' ';
        }
        cout << endl;
    }
}

void solvePuzzle_bfs(string input, string goal) {

}