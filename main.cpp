#include <iostream>
using namespace::std;

int main (void)
{
    float Num1, Num2, result;
    char operator1;

    cin >> Num1;
    cin >> operator1;
    cin >> Num2;

    if (operator1 == '+')
        result = Num1 + Num2;
    else if (operator1 == '-')
        result = Num1 - Num2;
    else if (operator1 == '*')
        result = Num1 * Num2;
    else if (operator1 == '/')
        {
            if(Num2 != 0)
                result = Num1 / Num2;
            else
            {
                cout << "A error happened, Num2 can't be zero!" << endl;
                return 0;
            }
        }

    cout << "The reslut is " << result << endl;
    return 0;
}
