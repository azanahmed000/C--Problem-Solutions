#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Person {
protected:
    int id;
    string name, address;
public:
    Person() : id(0), name(""), address("") {}
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
    }
    void display() {
        cout << "ID: " << id << "\nName: " << name << "\nAddress: " << address << "\n";
    }
};

class Patient : public Person {
    string disease;
public:
    void input() {
        Person::input();
        cout << "Enter Disease: ";
        getline(cin, disease);
    }
    void display() {
        Person::display();
        cout << "Disease: " << disease << "\n";
    }
};

class Doctor : public Person {
    string specialization;
public:
    void input() {
        Person::input();
        cout << "Enter Specialization: ";
        getline(cin, specialization);
    }
    void display() {
        Person::display();
        cout << "Specialization: " << specialization << "\n";
    }
};

int main() {
    vector<Patient> patients;
    vector<Doctor> doctors;
    int choice;
    do {
        cout << "\nHospital Management System\n";
        cout << "1. Add Patient\n2. Add Doctor\n3. Show Patients\n4. Show Doctors\n5. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Patient p;
            p.input();
            patients.push_back(p);
        } else if (choice == 2) {
            Doctor d;
            d.input();
            doctors.push_back(d);
        } else if (choice == 3) {
            for (auto &p : patients) p.display();
        } else if (choice == 4) {
            for (auto &d : doctors) d.display();
        }
    } while (choice != 5);
    
    return 0;
}

