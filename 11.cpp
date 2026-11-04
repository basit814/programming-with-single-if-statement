#include <iostream>
using namespace std;
int main() {
    int minutes;
    cout << "Enter remaining exam time in minutes: ";
    cin >> minutes;
    if (minutes <= 5) 
        cout << "Warning: Exam Is About to End";
    return 0;
}
