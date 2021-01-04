#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
// Chương trình chuyển biểu thức trung tố về hậu tố

int uuTien(char c) { // trả về mức độ ưu tiên của các toán tử
    if ( c == '(') {
        return 0;
    }
    if ( c == '+' || c == '-') {
        return 1;
    }
    if ( c == '*' || c == '/' || c == '%') {
        return 2;
    }
    if ( c == '^') {
        return 3;
    }
}

void hauto() {
    stack<char> s;
    int i = 0;
    string str, str1 = ""; // str : lưu trữ biểu thức đầu vào, str1 : lưu trữ toán hạng
    // cout << "Nhap bieu thuc: ";
    // cin >> str;
    getline(cin , str); // Đọc từng dòng từ bàn phím
    while( i < str.length() ) {
        char c = str.at(i); // ký tự tại vị trí thứ i của chuỗi str
        if (c != ' ') {
            if (c - '0' >= 0 && c - '0' <= 9 || isalpha(c)) {
                str1 += c;
            } //
            else {
                cout << str1 << " ";
                str1 = "";
                if ( c == ' ') {
                    s.push(c);
                }
                else{
                    if( c == ')') {
                        while ( s.top() != '(') {
                            cout << s.top();
                            s.pop();
                        }
                        s.pop();
                    }
                    else{
                        while ( !s.empty() && uuTien(c) <= uuTien(s.top())) {
                            cout << s.top();
                            s.pop();
                        }
                        s.push(c);
                    }
                }
            }
        }
        i++;
    }
    if ( str1 != "") {
        cout << str1 << " ";
    }
    while ( !s.empty() ) {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    hauto();
    return 0;
}
