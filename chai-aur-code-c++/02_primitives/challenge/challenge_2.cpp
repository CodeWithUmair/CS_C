#include <iostream>
using namespace std;

int main() {
    float basePrice;
    cout << "Enter base price of tea: ";
    cin >> basePrice;

    float increasedPrice = basePrice * 1.10; // Increase by 10%
    int roundedPrice = static_cast<int>(increasedPrice);

    cout << "New price after 10% increase (rounded): $" << roundedPrice << endl;

    return 0;
}
