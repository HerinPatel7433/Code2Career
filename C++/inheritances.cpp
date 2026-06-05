#include <iostream>
using namespace std;

class grandparent
{
    public:
    int a,b;
    void display();
};

class parent1 : public virtual grandparent
{
    public:
    void display()
    {
        cout << "Value of a and b is not defined" << endl;
    }
};

class parent2 : public virtual grandparent
{
    public:
    void display()
    {
        cout << "Value of a and b is still not defined" << endl;
    }
};

class child : public virtual parent1, public parent2
{
    public:
    child(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "value of a is " << a << endl << "value of b is " << b << endl;
    }
};

int main()
{
    child c(33,53);
    c.display();
    return 0;
}