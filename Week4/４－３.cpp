//4-3
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int max_val = 1000;

    // 최대 숫자의 길이를 계산하여 폭(width) 결정
    // 1000은 4글자, 1000*1000은 1,000,000으로 7글자임
    int col1_width = to_string(max_val).length() + 2;      // 여유 있게 +2
    int col2_width = to_string(max_val * max_val).length() + 2;

    for (int i = 1; i <= max_val; ++i) {
        // 임의의 변수를 사용하여 정렬
        cout << setw(col1_width) << i
            << setw(col2_width) << i * i << endl;
    }

    return 0;
}
