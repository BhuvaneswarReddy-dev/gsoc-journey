#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Shape {
public:
    virtual double Area() {
        return 0;
    }
    virtual string Name() {
        return "Generic Shape";
    }
    virtual ~Shape() {} 
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double Area() override {
        return width * height;
    }

    string Name() override {
        return "Rectangle";
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double Area() override {
        return 3.141592653589793 * radius * radius;
    }

    string Name() override {
        return "Circle";
    }
};

int main() {
    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(5.0, 4.0));
    shapes.push_back(new Circle(3.0));

    cout << fixed << setprecision(2);

    for (Shape* shape : shapes) {
        cout << shape->Name() << " Area: " << shape->Area() << endl;
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}