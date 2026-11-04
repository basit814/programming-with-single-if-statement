#include <iostream>
using namespace std;
int main() {
    float speed, limit;
    cout << "Enter vehicle speed: ";
    cin >> speed;
    cout << "Enter speed limit: ";
    cin >> limit;
    if (speed > limit)
        cout << "Speed Limit Violated";
    return 0;
}
