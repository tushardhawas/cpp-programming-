#include <iostream>
#include <string>
using namespace std;

class check_no
{
private:
    void check();
    string num;

public:
    void initate();
    void dispaly();
};
void check_no ::initate()
{
    cout << "enter the mobile number";
    cin >> num;
}
void check_no ::check()
{
    int check = 10;
    if (num.length() == 10)
    {
        for (int i = 0; i < num.length(); i++)
        {
            if (0 <= num.at[i] <= 9)
                check--;
            
            if (check == 0)
            {
                cout << "        the number is valid" << endl;
            }
        }
    }
    else
    {
        cout << "        the number is worng" << endl;
    }
}

void check_no ::dispaly()
{
    check();
    cout << "                   your entered number is  " << num << endl;
}
int main()
{
    check_no numbers;
    numbers.initate();
    numbers.dispaly();
    return 0;
}