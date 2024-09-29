#include <iostream>
#include <string>
#include <iomanip> // For std::setprecision
using namespace std;

class XYZ {
private:
    string name;
    string khuvuc;
    float diemtoan, diemly, diemhoa;

public:
    // Default constructor
    XYZ() {}

    // Constructor with parameters
    XYZ(string khuvuc, string name, float diemtoan, float diemly, float diemhoa) {
        this->khuvuc = khuvuc;
        this->name = name;
        this->diemtoan = diemtoan;
        this->diemly = diemly;
        this->diemhoa = diemhoa;
    }

    // Getter methods
    string getkhuvuc() {
        return khuvuc;
    }

    string getname() {
        return name;
    }

    float getdiemtoan() {
        return diemtoan;
    }

    float getdiemly() {
        return diemly;
    }

    float getdiemhoa() {
        return diemhoa;
    }

    // Display method
    void display() {
        int maso_numeric = stoi(khuvuc.substr(2)); // Get the numeric part from "KVx"
        float h = 0; // Initialize h

        // Assign h based on maso_numeric
        if (maso_numeric == 1) {
            h = 0.5;
        }
        else if (maso_numeric == 2) {
            h = 1.0;
        }
        else if (maso_numeric == 3) {
            h = 1.5;
        }

        float totalScore = diemtoan + diemly + diemhoa + h;
        string result = (totalScore < 24) ? "TRUOT" : "DAU";

        cout << getkhuvuc() << " " << getname() << " " << fixed << setprecision(1) << totalScore << " " << result << endl;
    }
};

int main() {
    // Fixed constructor call with 5 parameters
    XYZ s1("KV2", "kien", 8.8, 9.0, 7.5);
    s1.display();

    return 0;
}
