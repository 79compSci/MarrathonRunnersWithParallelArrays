#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Constants
const int RUNNERS = 5;
const int DAYS = 7;

// Function declarations
void inputData(string runners[], int miles[RUNNERS][DAYS]);
void calculateAndDisplayResults(string runners[], int miles[RUNNERS][DAYS]);

int main() {
    string runners[RUNNERS];
    int miles[5][7] = 0;

    inputData(runners, miles);
    calculateAndDisplayResults(runners, miles);

    return 0;
}

// Function to input data
void inputData(string runners[], int miles[RUNNERS][DAYS]) {
    for (int i = 0; i < RUNNERS; ++i) {
        cout << "Enter the name of runner " << (i + 1) << ": ";
        cin >> runners[i];
        cout << "Enter miles run for each day of the week for " << runners[i] << ":\n";
        for (int j = 0; j < DAYS; ++j) {
            cin >> miles[i][j];
        }
    }
}

// Function to calculate total, average and display the results
void calculateAndDisplayResults(string runners[], int miles[RUNNERS][DAYS]) {
    cout << setw(10) << "Runner" << setw(10) << "Sun" << setw(10) << "Mon" 
         << setw(10) << "Tue" << setw(10) << "Wed" << setw(10) << "Thu" 
         << setw(10) << "Fri" << setw(10) << "Sat" << setw(15) << "Total" 
         << setw(15) << "Average" << endl;

    for (int i = 0; i < RUNNERS; ++i) {
        int totalMiles = 0;
        cout << setw(10) << runners[i];
        for (int j = 0; j < DAYS; ++j) {
            cout << setw(10) << miles[i][j];
            totalMiles += miles[i][j];
        }
        double average = static_cast<double>(totalMiles) / DAYS;
        cout << setw(15) << totalMiles << setw(15) << average << endl;
    }
}
