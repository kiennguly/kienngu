#include <iostream>
using namespace std;

class Rectange {
private:
    double width, height;
    string color;
public:
    Rectange(){}
    Rectange(double width, double height,string color) {
        this->width = width;
        this->height= height;
        this->color = color;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    string getColor() {
        return color;
    }
    void setWidth(double width) {
        if (width >= -1000 && width <= 1000) {
            this->width = width;
        }
    }
    void setHeight(double height){
        if (height >= -1000 && height <= 1000) {
            this->height = height;
        }
    }
    void setColor(string color) {
        this->color = color;
    }
    double findA() {
        return double(width * height);
    }
    double findP() {
        return double(width + height)*2;
    }
    void display() {
        std::cout << findA()<<endl;
        std::cout << findP()<<endl;
        std::cout << getColor();
    }

};
int main()
{
    
    Rectange s1(22,25,"Gray");
    s1.display();
    return 0;
}

