// 20211957 유찬호
// main_split_str.cpp

#include<iostream>
#include<vector>
#include<string>
#include "split_str.h"

using namespace std;

int main(void){
    // cout << "Program Run!" << endl; // main.cpp

    string s;
    // 문자열을 한 행씩 입력받아 분할
    while (getline(cin, s))
    {
        vector<string> v = split(s);

        //벡터에 저장한 단어를 각각 출력
        for (vector<string>::size_type i = 0; i != v.size(); i++)
        {
            cout << v[i] <<endl;
        }
        
    }
    
    return 0;
}