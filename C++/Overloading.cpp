#include<iostream>
using namespace std;

class Calculator 
{
    public:
        void add(int a, int b)
        {
            int c = a + b;
            cout << "addition of a and b: " << c << endl;
        }

        void add(int a, int b, int c)
        {
            int d = a + b + c;
            cout << "addition of a,b and c: " << d << endl;
        }
};

int main()
{
    Calculator a;
    a.add(45,22);
    return 0;
}