#include <iostream>
using namespace std;
int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp >= 39) 
        cout << "High Fever Alert: Seek Medical Assessment";
    return 0;
}
