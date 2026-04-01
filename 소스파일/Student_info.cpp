// 20211957 유찬호
// Student_info.cpp

#include "../헤더파일/Student_info.h"

using namespace std;

// 학생 이름 알파벳 순으로 정렬하기 위한 비교 함수
bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;
}

// 여러 개의 과제 점수를 모두 읽어 벡터에 저장하는 함수
istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        hw.clear(); // 기존에 남아있을지 모르는 쓰레기값 제거
        
        double x;
        // 숫자가 입력되는 동안 계속 벡터에 추가
        while (in >> x) {
            hw.push_back(x);
        }
        
        in.clear(); // 다음 학생의 점수를 받기 위해 스트림의 에러 상태(EOF 등)를 초기화
    }
    return in;
}

// 한 학생의 정보를 읽는 함수
istream& read(istream& is, Student_info& s) {
    // 이름, 중간, 기말 점수 입력
    is >> s.name >> s.midterm >> s.final;
    
    // 이어서 과제 점수 입력 (위에서 정의한 read_hw 호출)
    read_hw(is, s.homework);
    
    return is;
}