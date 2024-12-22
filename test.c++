#include <iostream>
using namespace std;

// Function to validate and get marks for a subject
int getValidatedMarks(const string& subjectName, int maxMarksPerSubject) {
    int marks;
    do {
        cout << subjectName << ": ";
        cin >> marks;
        if (marks > maxMarksPerSubject) {
            cout << "Error: You cannot input marks above " << maxMarksPerSubject << "!\n";
        } else if (marks < 0) {
            cout << "Error: Marks cannot be negative!\n";
        }
    } while (marks < 0 || marks > maxMarksPerSubject);
    return marks;
}

int main() {
    // Variables to store student details
    string studentName, fatherName, rollNumber;

    // Maximum marks for each subject
    const int maxMarksPerSubject = 100;
    const int totalSubjects = 5;
    const int totalMaxMarks = maxMarksPerSubject * totalSubjects;

    // Heading
    cout << "Mark sheet of HSC" << endl;

    // Input student details
    cout << "Student Name: ";
    getline(cin, studentName);
    cout << "Father Name: ";
    getline(cin, fatherName);
    cout << "Roll Number: ";
    getline(cin, rollNumber);

    // Input marks for each subject
    cout << "\nEnter marks for the following subjects (out of " << maxMarksPerSubject << "):" << endl;

    // Validate marks
    int urduMarks = getValidatedMarks("Urdu", maxMarksPerSubject);
    int englishMarks = getValidatedMarks("English", maxMarksPerSubject);
    int physicsMarks = getValidatedMarks("Physics", maxMarksPerSubject);
    int mathsMarks = getValidatedMarks("Maths", maxMarksPerSubject);
    int chemistryMarks = getValidatedMarks("Chemistry", maxMarksPerSubject);

    // Calculate total marks and percentage
    int totalMarks = urduMarks + englishMarks + physicsMarks + mathsMarks + chemistryMarks;
    float percentage = (static_cast<float>(totalMarks) / totalMaxMarks) * 100;

    // Display the formatted mark sheet
    cout << "\n===========================================" << endl;
    cout << "             Mark sheet of HSC             " << endl;
    cout << "===========================================" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Father Name: " << fatherName << endl;
    cout << "Roll Number: " << rollNumber << endl;

    cout << "\nSubjects:" << endl;
    cout << "Urdu: " << urduMarks << endl;
    cout << "English: " << englishMarks << endl;
    cout << "Physics: " << physicsMarks << endl;
    cout << "Maths: " << mathsMarks << endl;
    cout << "Chemistry: " << chemistryMarks << endl;

    cout << "\nTotal Marks: " << totalMarks << " out of " << totalMaxMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "===========================================" << endl;

    return 0;
}
