#include <iostream>
#include <string>
using namespace std;

// Forward declarations
class Doctor;
class Patient;

// Billing Base Class
class Billing {
public:
    virtual double bill(double fees) = 0; // Pure virtual function
    virtual ~Billing() {} // Virtual destructor
};

// Regular Billing
class RegularBilling : public Billing {
public:
    double bill(double fees) override {
        return fees; // No discount
    }
};

// Insurance Billing
class InsuranceBilling : public Billing {
public:
    double bill(double fees) override {
        return fees * 0.8; // 20% discount
    }
};

// Doctor Class
class Doctor {
protected:
    string name;
    string specialization;
public:
    Doctor(string name, string specialization)
        : name(name), specialization(specialization) {}

    string getname() const {
        return name;
    }

    string getspecialization() const {
        return specialization;
    }
};

// Patient Class
class Patient {
protected:
    string name;
    int age;
public:
    Patient(string name, int age)
        : name(name), age(age) {}

    string getname() const {
        return name;
    }

    int getage() const {
        return age;
    }
};

// Appointment Class (Composition of Doctor and Patient)
class Appointment {
private:
    Doctor* doctor;
    Patient* patient;
    double fee;
    Billing* billing; // Polymorphic billing
public:
    Appointment(Doctor* doctor, Patient* patient, double fee, Billing* billing)
        : doctor(doctor), patient(patient), fee(fee), billing(billing) {}

    void displayAppointment() {
        cout << "Appointment Details:" << endl;
        cout << "Doctor: " << doctor->getname() << " (" << doctor->getspecialization() << ")" << endl;
        cout << "Patient: " << patient->getname() << " (Age: " << patient->getage() << ")" << endl;
        cout << "Fee: $" << fee << endl;
        cout << "Total Bill: $" << billing->bill(fee) << endl;
    }

    ~Appointment() {
        delete billing; // Clean up billing object
    }
};

int main() {
    // Create Doctor and Patient objects
    Doctor doc("Dr. Smith", "Cardiologist");
    Patient patient("John Doe", 30);

    // Create Billing objects
    Billing* regularBilling = new RegularBilling();
    Billing* insuranceBilling = new InsuranceBilling();

    // Create Appointment objects
    Appointment appointment1(&doc, &patient, 100, regularBilling);
    Appointment appointment2(&doc, &patient, 100, insuranceBilling);

    // Display appointment details
    appointment1.displayAppointment();
    cout << "-------------------------" << endl;
    appointment2.displayAppointment();

    // Clean up is handled by the Appointment destructor
    return 0;
}