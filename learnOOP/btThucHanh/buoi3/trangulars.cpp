#include <iostream>
#include <math.h>
// • Bài tập 3.4. Hàm tự do là bạn của lớp
//     ◦ Xây dựng 1 lớp point gồm:
//         ▪ Thuộc tính x, y mô tả toạ độ của điểm.
//         ▪ Hàm thiết lập với 2 tham số có giá trị ngầm định bằng 0.
//         ▪ Hàm hiển thị toạ độ của điểm.
//         ▪ Khai báo hàm tự do tính khoảng cách giữa 2 point là bạn với lớp.
//     ◦ Xây dựng 1 lớp line gồm:
//         ▪ Hai điểm xác định đoạn thẳng.
//         ▪ Hàm thiết lập với 2 tham số là 2 điểm.
//         ▪ Hàm hiển thị toạ độ, khoảng cách 2 điểm.

using namespace std;

class point
{
private:
    float x, y;

public:
    point(float _x = 0, float _y = 0)
    {
        x = _x;
        y = _y;
    }

    void display()
    {
        cout << "x = " << x << "y = " << y;
    }
    friend float kcach(point a, point b);
};

float kcach(point A, point B)
{
    return sqrt(pow((A.x - B.x), 2) - pow((A.y - B.y), 2));
};

class line
{
};

int main()
{
}
