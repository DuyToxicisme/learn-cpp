### một số hàm hay sử dụng trong vector

**In kích thước cảu vector**

```c++
    vector<int> v1;
    cout << v1.size();
```

**Tìm phần tử đầu tiên và cuối cùng**

```c++
    cout << v1.front() << endl;
    cout << v1.back() << endl;
```

**Tìm phần tử tại vị trí bất kỳ**

```c++
    cout << v1.at('chi so vi tri') << endl;
    // tính từ 0
```

**Thêm phần tử vào cuối**

```c++
   v1.push_back(10);
```

**Xóa phần tử ở cuối**

```c++
    v1.pop_back();
```
