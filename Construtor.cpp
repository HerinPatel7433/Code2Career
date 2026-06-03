#include<iostream>
using namespace std;

class Constructor
{
    private:
        int n1, n2;
    public:
        Constructor(int a, int b)
        {
            n1 = a;
            n2 = b;
        }

        void dispaly()
        {
            cout<<"n1 is : " << n1 << endl;
            cout<<"n2 is : " << n2 << endl;
        }
};

int main()
{
    Constructor c(23,34);
    c.dispaly();
    return 0;
}