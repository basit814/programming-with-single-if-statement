#include <iostream>
using namespace std;
int main() {
    float marks, attendance;
    cout << "Enter marks and attendence percentage:"<<endl;
    cin >> marks>>attendance;
    if (marks >= 85 && attendance >= 90)
        cout << "Eligible for Scholarship";
    return 0;
}
