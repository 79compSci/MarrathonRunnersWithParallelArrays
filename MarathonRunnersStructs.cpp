#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Constants
const int RUNNERS = 5;
const int DAYS = 7;

struct Runner {
    string name;
    int miles[DAYS];
};

// Function declarations
void inputData(Runner runners[]);
void calculateAndDisplayResults(Runner runners[]);

int main() {
    Runner runners[RUNNERS];

    inputData(runners);
    calculateAndDisplayResults(runners);

    return 0;
}

// Function to input data
void inputData(Runner runners[]) {
    for (int i = 0; i < RUNNERS; ++i) {
        cout << "Enter the name of runner " << (i + 1) << ": ";
        cin >> runners[i].name;
        cout << "Enter miles run for each day of the week for " << runners[i].name << ":\n";
        for (int j = 0; j < DAYS; ++j) {
            cin >> runners[i].miles[j];
        }
    }
}

// Function to calculate total, average and display the results
void calculateAndDisplayResults(Runner runners[]) {
    cout << setw(10) << "Runner" << setw(10) << "Sun" << setw(10) << "Mon" 
         << setw(10) << "Tue" << setw(10) << "Wed" << setw(10) << "Thu" 
         << setw(10) << "Fri" << setw(10) << "Sat" << setw(15) << "Total" 
         << setw(15) << "Average" << endl;
    
    for (int i = 0; i < RUNNERS; ++i) {
        int totalMiles = 0;
        cout << setw(10) << runners[i].name;
        for (int j = 0; j < DAYS; ++j) {
            cout << setw(10) << runners[i].miles[j];
            totalMiles += runners[i].miles[j];
        }
        double average = static_cast<double>(totalMiles) / DAYS;
        cout << setw(15) << totalMiles << setw(15) << average << endl;
    }
}
