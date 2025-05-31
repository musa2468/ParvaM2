#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

struct Candidate 
{
    string fullName;
    //string fatherName;
    string dob;
    string gender;
    string experience;
    string qualification;
    string email;
    string phone;
    string idType;
    string idNumber;
    string paperChoice;
    string examLanguage;
};

void getInput(Candidate &c) {
    cout << "\n--- TET Registration Form ---\n";

    cout << "Full Name: ";
    getline(cin, c.fullName);

    //cout << "Father's Name: ";
    //getline(cin, c.fatherName);

    cout << "Date of Birth (DD/MM/YYYY): ";
    getline(cin, c.dob);

    cout << "Gender (M/F/Other): ";
    getline(cin, c.gender);

    cout << "Experience: ";
    getline(cin, c.experience);

    cout << "Highest Qualification (e.g., B.Ed, D.El.Ed): ";
    getline(cin, c.qualification);

    cout << "Email Address: ";
    getline(cin, c.email);

    cout << "Phone Number: ";
    getline(cin, c.phone);

    cout << "ID Type (Aadhar, PAN, etc.): ";
    getline(cin, c.idType);

    cout << "ID Number: ";
    getline(cin, c.idNumber);

    cout << "Applying For (Paper I / Paper II / Both): ";
    getline(cin, c.paperChoice);

    cout << "Preferred Language (English/Hindi/Other): ";
    getline(cin, c.examLanguage);
}

void saveToFile(const Candidate &c) {
    ofstream outFile("registration_data.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "\n--- New Registration ---\n";
        outFile << "Full Name: " << c.fullName << "\n";
        //outFile << "Father's Name: " << c.fatherName << "\n";
        outFile << "DOB: " << c.dob << "\n";
        outFile << "Gender: " << c.gender << "\n";
        outFile << "Category: " << c.experience << "\n";
        outFile << "Qualification: " << c.qualification << "\n";
        outFile << "Email: " << c.email << "\n";
        outFile << "Phone: " << c.phone << "\n";
        outFile << "ID Type: " << c.idType << "\n";
        outFile << "ID Number: " << c.idNumber << "\n";
        outFile << "Paper Choice: " << c.paperChoice << "\n";
        outFile << "Language: " << c.examLanguage << "\n";
        outFile << "---------------------------\n";
        outFile.close();
        cout << "\n✅ Registration saved successfully!\n";
    } else {
        cerr << "\n❌ Error saving registration data.\n";
    }
}

int main() {
    Candidate candidate;
    char choice;

    do 
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        getInput(candidate);
        saveToFile(candidate);

        cout << "\nDo you want to register another candidate? (Y/N): ";
        cin >> choice;
        cin.ignore(); // Clear buffer again
    } while (choice == 'Y' || choice == 'y');

    cout << "\nThank you for using the TET registration system.\n";
    return 0;
}
