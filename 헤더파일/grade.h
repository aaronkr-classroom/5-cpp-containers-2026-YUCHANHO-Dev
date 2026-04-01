// 20211957 유찬호
// grade.h

#pragma once
#include <vector>
#include "Student_info.h" // Student_info 구조체를 매개변수로 받기 위해 필요

// 최종 점수를 계산하는 함수 선언 (오버로딩)
double grade(double midterm, double final_exam, const std::vector<double>& hw);
double grade(double midterm, double final_exam, double homework);
double grade(const Student_info& s);