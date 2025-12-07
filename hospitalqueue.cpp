#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Structure to store patient details
struct Patient {
    int id;
    string name;
    string issue;
    string time;
};

queue<Patient> q;

// Function to add patient
void addPatient() {
    Patient p;
    cout << "\nEnter Patient ID: ";
    cin >> p.id;
    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, p.name);

    cout << "Enter Health Issue: ";
    getline(cin, p.issue);

    cout << "Enter Appointment Time: ";
    getline(cin, p.time);

    q.push(p);
    cout << "\nPatient added successfully!\n";
}

// Function to serve patient
void servePatient() {
    if (q.empty()) {
        cout << "\nNo patients to serve!\n";
        return;
    }

    Patient p = q.front();
    q.pop();

    cout << "\nServing Patient:\n";
    cout << "ID: " << p.id << endl;
    cout << "Name: " << p.name << endl;
    cout << "Health Issue: " << p.issue << endl;
    cout << "Appointment Time: " << p.time << endl;
}

// Function to search patient by ID
void searchPatient() {
    if (q.empty()) {
        cout << "\nQueue is empty!\n";
        return;
    }

    int searchId;
    cout << "\nEnter Patient ID to search: ";
    cin >> searchId;

    queue<Patient> temp = q;
    bool found = false;

    while (!temp.empty()) {
        if (temp.front().id == searchId) {
            Patient p = temp.front();
            cout << "\nPatient Found:\n";
            cout << "Name: " << p.name << endl;
            cout << "Health Issue: " << p.issue << endl;
            cout << "Appointment Time: " << p.time << endl;
            found = true;
            break;
        }
        temp.pop();
    }

    if (!found)
        cout << "\nPatient not found!\n";
}

// Function to count patients
void countPatients() {
    cout << "\nTotal Patients in Queue: " << q.size() << endl;
}

// Function to display all patients
void displayPatients() {
    if (q.empty()) {
        cout << "\nNo patients in queue!\n";
        return;
    }

    queue<Patient> temp = q;
    cout << "\n----- Patient Queue -----\n";

    while (!temp.empty()) {
        Patient p = temp.front();
        cout << "ID: " << p.id
             << " | Name: " << p.name
             << " | Issue: " << p.issue
             << " | Time: " << p.time << endl;
        temp.pop();
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n===== Hospital Patient Queue Management =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Serve Patient\n";
        cout << "3. Search Patient by ID\n";
        cout << "4. Count Patients\n";
        cout << "5. Display Patients\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addPatient(); break;
            case 2: servePatient(); break;
            case 3: searchPatient(); break;
            case 4: countPatients(); break;
            case 5: displayPatients(); break;
            case 6: cout << "\nThank you!\n"; break;
            default: cout << "\nInvalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
