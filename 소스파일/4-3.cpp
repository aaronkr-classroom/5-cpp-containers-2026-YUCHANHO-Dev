#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int max_val = 1000;
    
    int col1_width = to_string(max_val).size() + 2;
    int col2_width = to_string(max_val * max_val).size() + 2;

    for (int i = 1; i <= max_val; ++i) {
        cout << setw(col1_width) << i << setw(col2_width) << i * i << '\n';
    }
    return 0;
}