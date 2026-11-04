#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter room temperature: ";
    cin >> temp;
    if (temp > 30)
        cout << "Turn On the Cooling System";
    return 0;
}
