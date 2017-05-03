#include <iostream>
<<<<<<< HEAD
using namespace::std;

int main (void)
{
    float Num1, Num2, result;
    char operator1;

    cout << "Please input the Num1 operator Num2" << endl;
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
    else {
        cout << "A error happened, the operator is illegal!" << endl;
        return 0;
    }

    cout << "The reslut is " << result << endl;
=======

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
>>>>>>> HelloWorld
    return 0;
}
