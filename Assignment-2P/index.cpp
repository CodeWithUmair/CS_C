#include <iostream>
#include <string>
using namespace std;

class Recruitment {
private:
    string name;
    int age;
    float weight;
    float height;
    bool eligible;
    string reason;
    static int paramConstructorCount;

public:
    // Default constructor
    Recruitment() {
        cout << "My name is Muhammad Umair" << endl;
        cout << "My VUID is BC24210396" << endl;
        cout << "------------------------------------------" << endl;
    }

    // Parameterized constructor
    Recruitment(string candidateName, int candidateAge, float candidateWeight, float candidateHeight) 
        : name(candidateName), age(candidateAge), weight(candidateWeight), height(candidateHeight), eligible(false), reason("") {
        paramConstructorCount++;
    }

    // Member function to check eligibility
    void checkEligibility() {
        if (age < 18 || age > 22) {
            eligible = false;
            reason += "Age is not in range (18-22). ";
        }
        if (weight < 52 || weight > 60) {
            eligible = false;
            reason += "Weight is not in range (52-60 kg). ";
        }
        if (height < 5.6) {
            eligible = false;
            reason += "Height is less than 5.6 feet. ";
        }
        if (reason.empty()) {
            eligible = true;
            reason = "Eligible for recruitment.";
        }
    }

    // Member function to display candidate details and eligibility status
    void displayStatus() {
        cout << "Candidate Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Eligibility Status: " << (eligible ? "Eligible" : "Not Eligible") << endl;
        cout << "Reason: " << reason << endl;
        cout << "------------------------------------------" << endl;
    }

    // Utility function to display how many times parameterized constructor is called
    static void displayConstructorCount() {
        cout << "Parameterized constructor called " << paramConstructorCount << " times." << endl;
    }
};

// Initialize static variable
int Recruitment::paramConstructorCount = 0;

int main() {
    // Default constructor
    Recruitment info;

    // Create candidate objects with hardcoded values
    Recruitment candidate1("Babar", 20, 58, 5.8);
    Recruitment candidate2("Rizwan", 23, 60, 5.7);
    Recruitment candidate3("Shan", 19, 50, 5.5);

    // Check eligibility for each candidate
    candidate1.checkEligibility();
    candidate2.checkEligibility();
    candidate3.checkEligibility();

    // Display status for each candidate
    candidate1.displayStatus();
    candidate2.displayStatus();
    candidate3.displayStatus();

    // Display count of parameterized constructor calls
    Recruitment::displayConstructorCount();

    return 0;
}
