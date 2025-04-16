#include <iostream>
#include <string>
using namespace std;

int main() {
    string favoriteTea;
    int cups;

    cout << "What is your favorite tea? ";
    cin.ignore(); // Clear the input buffer
    getline(cin, favoriteTea);

    cout << "How many cups would you like? ";
    cin >> cups;

    cout << "Awesome! Enjoy your " << cups << " cup(s) of \"" << favoriteTea << "\" tea!\n";

    return 0;
}
