#include<iostream>
using namespace std;

class Animal
{
    public:
    void run();
};

class Dog : public Animal
{
    public:
    //Overriden the run method
    void run()
    {
        cout << "Dog is Running" << endl;
    }
};

int main()
{
    Dog d;
    d.run();
    return 0;
}