#include<iostream>
using namespace std;

class bank
{
    private:
    float amount = 0.0;

    public:
    bank(float amount)
    {
        this->amount = amount;
    }

    void getBalance()
    {
        cout << "Balance is : "  << amount << endl;
    }

    void withdraw(float amount)
    {
        float temp = this->amount - amount;
        if(temp < 2000){
            cout << "Minimum 2000 Balaance is required" << endl;
        }
        else
        {
        this->amount = this->amount - amount;
        }
    }

    void deposit(float amount)
    {
        if(amount >= 10000)
        {
            cout << "Sorry can Deposit more than or equal to 10000" << endl;
        }
        else
        {
            this->amount = this->amount + amount;
        }
    }
};

int main()
{
    bank b1(50000.0);
    b1.getBalance();
    b1.deposit(15000.0);
    b1.getBalance();
    b1.withdraw(49000.0);
    b1.getBalance();
}
