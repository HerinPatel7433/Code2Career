#include<iostream>
using namespace std;

class Shape
{
    public:
    int length , witdt;
};

class Rectangle : public Shape
{
    public:
    Rectangle(int a, int b)
    {
        length = a;
        witdt = b;
    }

    int area()
    {
        return length*witdt;
    }

    void display()
    {
        cout << "Area: " << area() << endl;
    }
};

int main()
{
    Rectangle r(50,40);
    r.area();
    r.display();
}