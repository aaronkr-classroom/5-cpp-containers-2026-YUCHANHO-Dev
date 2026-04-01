// 20211957 유찬호
// split_str.cpp

#include "split_str.h"
#include <cctype>

using namespace std;

vector<string> split(const string& s) {
    vector<string> ret;
    typedef string::size_type str_sz;
    str_sz i = 0;

    // 불변성: 지금까지 [원래의 i, 현재의 i) 범위에 있는 문자들을 처리
    while (i != s.size()) {
        // 선행하는 공백들을 무시 
        // 불변성: 지금까지 [원래의 i, 현재의 i) 범위에 있는 문자들은 모두 공백
        while (i != s.size() && isspace(s[i])) {
            ++i;
        }

        // 순서상 다음 단어의 끝을 찾음
        str_sz j = i;

        // 불변성: 지금까지 [원래의 j, 현재의 j) 범위에 있는 문자들은 공백이 아님
        while (j != s.size() && !isspace(s[j])) {
            j++;
        }
        
        // 공백이 아닌 문자열을 찾았을 때 
        if (i != j) {
            // i에서부터 j - i개의 문자를 s에서 복사하여 벡터에 추가
            ret.push_back(s.substr(i, j - i));
            i = j; // 다음 단어를 찾기 위해 i 위치를 j로 이동
        }
    }
    
    return ret;
}