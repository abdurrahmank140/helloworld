#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float mark;

public:
    void setName(string n) {
        name = n;
    }

    void setMark(float m) {
        if (m >= 0 && m <= 100) {
            mark = m;
        } else {
            cout << "Invalid mark. Setting mark to 0.\n";
            mark = 0;
        }
    }

    string getName() {
        return name;
    }

    float getMark() {
        return mark;
    }

    bool isPassed() {
        return mark >= 50;
    }
};

int main() {
    Student s;
    string name;
    float mark;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student mark: ";
    cin >> mark;

    s.setName(name);
    s.setMark(mark);

    cout << "\nStudent Name: " << s.getName() << endl;
    cout << "Student Mark: " << s.getMark() << endl;

    if (s.isPassed())
        cout << "Status: Passed" << endl;
    else
        cout << "Status: Failed" << endl;

    return 0;
}