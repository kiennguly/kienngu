#include <iostream>
#include <string>
using namespace std;

class XYZ {
private:
    string maso;
    string name;
    int luong;

public:
    XYZ() {}

    XYZ(string maso, string name, int luong) {
        this->maso = maso;
        this->name = name;
        this->luong = luong;
    }

    int getluong() {
        return luong;
    }

    string getname() {
        return name;
    }

    string getmaso() {
        return maso;
    }

    void setmaso(string maso) {
        this->maso = maso;
    }

    void setname(string name) {
        this->name = name; // Thêm tên vào tham số
    }

    void setluong(int luong) {
        if (luong <= 10000000) {
            this->luong = luong;
        }
    }

    void display() {
        // Trích xuất phần số từ maso
        string k = maso.substr(0, 2); // Lấy hai ký tự đầu
        int maso_numeric = stoi(maso.substr(2)); // Chuyển phần số sang int

        int thuong = 0; // Khai báo biến thưởng

        // Gán giá trị thưởng dựa trên mã số
        if (k == "HT") {
            thuong = 2000000;
        }
        else if (k == "HP") {
            thuong = 900000;
        }
        else if (k == "GV") {
            thuong = 500000;
        }

        cout << maso << " " << name << " " << maso_numeric<< " " << (maso_numeric * luong + thuong) << endl; // Tính và in kết quả
    }
};

int main() {
    XYZ s1("HP05", "kien", 1748000);
    s1.display();

    return 0;
}
