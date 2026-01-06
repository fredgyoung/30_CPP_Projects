#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {

    cout << "Calculator!" << endl;
    vector<double> grades = {2, 4, 8, 5};

    for (const double grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    // Use 0.0 as the initial value to ensure the sum is accumulated as a double
    const double sum = accumulate(grades.begin(), grades.end(), 0.0);
    // Divide the sum by the number of elements
    double avg = sum / grades.size();
    cout << "Average: " << avg << endl;

    return 0;
}