#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void setRadius(float r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Radius must be positive. Setting radius to 0.\n";
            radius = 0;
        }
    }

    float getRadius() {
        return radius;
    }

    float getArea() {
        const float PI = 3.14159;
        return PI * radius * radius;
    }
};

int main() {
    Circle c;
    float r;

    cout << "Enter radius: ";
    cin >> r;

    c.setRadius(r);

    cout << "Area of the circle: " << c.getArea() << endl;

    return 0;
}