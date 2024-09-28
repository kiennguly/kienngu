#include<iostream>//oops banana
using namespace std;

class kien {
private:
    int tu;
    int mau;

public:
    void Nhap(int tu, int mau) {
        this->tu = tu;
        this->mau = mau;
    }

    int getTu() {
        return tu;
    }

    int getMau() {
        return mau;
    }

    void setTu(int tu) {
        this->tu = tu;
    }

    void setMau(int mau) {
        this->mau = mau;
    }

    int UCLN(int a, int b) {  // Hàm tìm UCLN
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void rutGonPhanSo() {  // Hàm rút gọn phân số
        int ucln = UCLN(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }

    void display() {
        rutGonPhanSo();  // Rút gọn phân số trước khi hiển thị
        cout << tu << "/" << mau << endl;
    }
};

int main() {
    kien s1;
    s1.Nhap(312, 945);
    s1.display();

    return 0;
}
