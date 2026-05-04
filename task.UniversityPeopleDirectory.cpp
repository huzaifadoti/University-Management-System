#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;

public:
    Person(string nm, int ide) : name(nm), id(ide) {}

    virtual void inputdata() = 0;
    virtual void display() = 0;

    virtual ~Person() {}  // important for polymorphism
};

class Student : public Person {
private:
    string course;
    float gpa;

public:
    Student(string nm, int ide) : Person(nm, ide) {}

    void inputdata() override {
        cout << "Enter course: " << endl;
        cin.ignore();
        getline(cin, course);

        cout << "Enter GPA: " << endl;
        cin >> gpa;

        while (gpa < 0.0 || gpa > 4.0) {
            cout << "Invalid GPA! Enter again (0 - 4.0): " << endl;
            cin >> gpa;
        }
    }

    void display() override {
        cout << "\nName: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Course: " << course << endl;
        cout << "GPA: " << gpa << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    int salary;

public:
    Teacher(string nm, int ide) : Person(nm, ide) {}

    void inputdata() override {
        cout << "Enter subject: " << endl;
        cin.ignore();
        getline(cin, subject);

        cout << "Enter salary: " << endl;
        cin >> salary;

        while (salary < 10000) {
            cout << "Salary cannot be less than 10000. Try again: " << endl;
            cin >> salary;
        }
    }

    void display() override {
        cout << "\nName: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Staff : public Person {
private:
    string department;
    int workinghours;

public:
    Staff(string nm, int ide) : Person(nm, ide) {}

    void inputdata() override {
        cout << "Enter department: " << endl;
        cin.ignore();
        getline(cin, department);

        cout << "Enter working hours: " << endl;
        cin >> workinghours;
    }

    void display() override {
        cout << "\nName: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Working hours: " << workinghours << endl;
    }
};

int main() {
    vector<Person*> per;

    int n, input;
    string name;
    int id;

    cout << "How many entries do you want? " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter 1 for Student" << endl;
        cout << "Enter 2 for Teacher" << endl;
        cout << "Enter 3 for Staff" << endl;
        cin >> input;

        cout << "Enter name: " << endl;
        cin.ignore();
        getline(cin, name);

        cout << "Enter ID: " << endl;
        cin >> id;

        if (input == 1) {
            per.push_back(new Student(name, id));
        }
        else if (input == 2) {
            per.push_back(new Teacher(name, id));
        }
        else if (input == 3) {
            per.push_back(new Staff(name, id));
        }
        else {
            cout << "Invalid input!" << endl;
            i--;
            continue;
        }

        per[i]->inputdata();
        per[i]->display();
    }

    cout << "\n--- All Records ---\n";
    for (Person* p : per) {
        p->display();
    }

    for (Person* p : per) {
        delete p;
    }

    return 0;
}