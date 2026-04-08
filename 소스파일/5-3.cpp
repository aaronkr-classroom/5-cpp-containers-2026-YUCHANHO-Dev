#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student_info {
    string name;
    double midterm;
    double final;
    double homework;
};

double grade(const Student_info& s) {
    return s.midterm * 0.2 + s.final * 0.4 + s.homework * 0.4;
}

bool fgrade(const Student_info& s) {
    return grade(s) < 60;
}

typedef vector<Student_info> StudentContainer;

StudentContainer extract_fails(StudentContainer& students) {
    StudentContainer fail;
    StudentContainer::iterator iter = students.begin();
    
    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
        } else {
            ++iter;
        }
    }
    return fail;
}

int main() {
    StudentContainer students;
    Student_info s;
    
    while (cin >> s.name >> s.midterm >> s.final >> s.homework) {
        students.push_back(s);
    }
    
    StudentContainer fails = extract_fails(students);
    
    for (StudentContainer::iterator it = fails.begin(); it != fails.end(); ++it) {
        cout << it->name << "\n";
    }
    
    return 0;
}