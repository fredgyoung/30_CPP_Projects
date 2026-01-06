#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Calculator!" << endl;

    vector<double> grades = {2, 4, 8, 5};

    for (const double grade : grades) {
        cout << grade << ", ";
    }

    return 0;
}