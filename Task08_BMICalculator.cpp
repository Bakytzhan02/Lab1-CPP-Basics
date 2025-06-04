#include <iostream>
using namespace std;

int main() {
    float weight, height;
    cout << "Enter weight (kg) and height (m): ";
    cin >> weight >> height;
    float bmi = weight / (height * height);
    cout << "Your BMI is " << bmi << endl;
    return 0;
}
