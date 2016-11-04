#include <iostream>

using namespace std;

int main()
{
    int accumulator = 0;
    int leftOperand;
    char operation;

	bool isRuning = true;
    while(isRuning)
    {
        cin >> leftOperand;
        cin >> operation;
        switch(operation)
        {
            case '+':
            {
                accumulator += leftOperand;
                break;
            }
            case '-':
            {
                accumulator -= leftOperand;
                break;
            }
            case '*':
            {
                accumulator *= leftOperand;
                break;
            }
            case '/':
            {
                accumulator /= leftOperand;
                break;
            }
            case '%':
            {
                accumulator %= leftOperand;
                break;
            }
            default:
            {
                isRuning = false;
                break;
            }
        }
        cout << " => " << accumulator << '\n';
    }
}
