#include <iostream>

using namespace std;

class Rectangle 
{
    public:
        Rectangle();
        Rectangle(int a, int b, string color);

        int getA() const;
        int getB() const;
        int getColor() const;
        // void setA(int num) const;
        // void setB(int num) const;
        // void setColor(int color) const;
        int getArea();

    private:
        int a;
        int b;
        string color;
};

Rectangle::Rectangle(int a, int b, string color)
{
    this->a = a;
    this->b = b;
    this->color = color;
}

int Rectangle::getArea()
{
    return this->a * this->b;
}

int main() {
    Rectangle rect(2, 2, "blue");

    cout << rect.getArea() << endl;
}