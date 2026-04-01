// 20211957
//frame.h

#pragma once
#include <vector>
#include <string>

// 가장 긴 문자열의 길이를 구하는 함수 선언
std::string::size_type width(const std::vector<std::string>& v);

// 문자열 벡터에 테두리를 입혀 반환하는 함수 선언
std::vector<std::string> frame(const std::vector<std::string>& v);