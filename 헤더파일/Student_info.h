// 20211957 유찬호
// Student_info.h

#pragma once
#include <iostream>
#include <string>
#include <vector>

// 구조체 정의: 학생 1명의 데이터를 담는 틀
struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

// 함수 원형 선언 (컴파일러에게 이런 함수가 있다고 미리 알려줌)
bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);