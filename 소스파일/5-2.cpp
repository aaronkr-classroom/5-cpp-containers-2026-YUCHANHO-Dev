#include <iostream>
#include <vector>
#include <list>
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

vector<Student_info> extract_fails_vector(vector<Student_info>& students) {
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
    
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

list<Student_info> extract_fails_list(list<Student_info>& students) {
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    
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
    vector<Student_info> sv;
    list<Student_info> sl;
    Student_info s;
    
    while (cin >> s.name >> s.midterm >> s.final >> s.homework) {
        sv.push_back(s);
        sl.push_back(s);
    }
    
    vector<Student_info> fails_v = extract_fails_vector(sv);
    list<Student_info> fails_l = extract_fails_list(sl);
    
    cout << "Vector Fails:\n";
    for (vector<Student_info>::iterator it = fails_v.begin(); it != fails_v.end(); ++it) {
        cout << it->name << "\n";
    }
    
    return 0;
}