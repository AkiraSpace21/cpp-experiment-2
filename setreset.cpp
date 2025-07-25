#include <iostream>
using namespace std;
int main() {
    int setPos, clearPos;
    int value = 80;
    int resultSet, resultClear;
    cout << "Enter the bit position to set: ";
    cin >> setPos;
    cout << "Enter the bit position to clear: ";
    cin >> clearPos;
    resultSet = value | (1 << 3);
    resultClear = value & ~(1 << 4);
    cout << "Result after setting bit: " << resultSet << endl;
    cout << "Result after clearing bit: " << resultClear << endl;

    return 0;
}
