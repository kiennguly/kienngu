#include<iostream>
using namespace std;

class kien {
private:
    string name;
    int ngaysinh;
    float diemmon1, diemmon2, diemmon3;
public:
    void khoi(string name, int ngaysinh, float diemmon1, float diemmon2, float diemmon3) {
        this->name = name;
        this->ngaysinh = ngaysinh;
        this->diemmon1 = diemmon1;
        this->diemmon2 = diemmon2;
        this->diemmon3 = diemmon3;

    }
    string getName() {
        return name;
    }
    float getDiemmon1() {
        return diemmon1;
    }
    float getDiemmon2() {
        return diemmon2;
    }
    float getDiemmon3() {
        return diemmon3;
    }
    int getNgaysinh() {
        return ngaysinh;
    }
    void display() {

        cout << getName();
        int j = ngaysinh % 10000; // năm
        int k = (ngaysinh / 10000) % 100; // tháng
        int l = ngaysinh / 1000000; // ngày

        cout <<<"  "< l << "/" << k << "/" << j;
        
        cout << "  " << getDiemmon1() + getDiemmon2() + getDiemmon3();
    }







};

int main()
{
    kien s1;
    s1.khoi( "kien", 24022006, 9, 9, 9);
    s1.display();
}
