// 3.5. a. Xây dựng 1 lớp Point mô tả các điểm trên mặt phẳng. Lớp gồm các thành phần:
// - Các thuộc tính x, y mô tả toạ độ của điểm
// - Hàm thiết lập có 2 tham số với các giá trị ngầm định là 0.
// - Hàm thiết lập sao chép.
// - Hàm display() để hiển thị toạ độ của điểm trong mặt phẳng.
// b. Xây dựng 1 lớp Circle kế thừa từ lớp Point và bổ sung thêm các thành phần:
// - Thuộc tính r mô tả bán kính của đường tròn.
// - Hàm thiết lập đường tròn tại 1 điểm O và bán kính or.
// - Hàm thiết lập đường tròn tại tọa độ (x,y) và bán kính or.
// - Hàm hiển thị toạ độ tâm và bán kính của đường tròn.
// - Hàm tính diện tích của đường tròn.
// - Định nghĩa toán tử > để so sánh diện tich 2 đường tròn.
// d. Viết chương trình nhập vào toạ độ điểm A(x,y) và bán kính r. Tạo đường tròn xác định tâm
// A bán kính r. Hiển thị toạ độ của tâm, bán kính và diện tích của đường tròn.
// e. Viết chương trình nhập dữ liệu để tạo n con trỏ đối tượng đường tròn. Sắp xếp các đối
// tượng đường tròn theo diện tích tăng dần. Hiện thị các đối tượng đã sắp.

#include <iostream>
using namespace std;

class point
{
private:
    float x, y;

public:
    point(float _x = 0, float _y = 0)
    {
        x = _x, y = _y;
    }
    point(point &p){
        x=p.x;
        y=p.y;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y;
    }
};

class circle:public point{
    private:
        float r;
    public:
        circle(float _x = 0, float _y = 0, float _r = 0): point(_x, _y){
            r = _r;
        }

};

int main()
{
}
