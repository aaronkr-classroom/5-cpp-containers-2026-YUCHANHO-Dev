// 20211957 유찬호
// grade.cpp

#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <stdexcept>
#include <vector>

using namespace std;

double grade(double midterm, double final_exam, double homework) {
    return 0.2 * midterm + 0.4 * final_exam + 0.4 * homework;
}

double grade(double midterm, double final_exam, const vector<double>& hw) {
    if (hw.size() == 0) {
        throw domain_error("student has done no homework");
    }
    return grade(midterm, final_exam, median(hw));
}

double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}