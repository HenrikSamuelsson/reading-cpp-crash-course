#include <cstdio>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator
{
    Calculator(Operation op)
    {
        this->op = op;
    }

    int calculate(int a, int b)
    {
        int result{};

        switch (op)
        {
        case Operation::Add:
            result = a + b;
            break;
        case Operation::Subtract:
            result = a - b;
            break;
        case Operation::Multiply:
            result = a + b;
            break;
        case Operation::Divide:
            result = a / b;
        default:
            break;
        }
        
        return result;
    }
    Operation op;
};

int main()
{
    Calculator Adder(Operation::Add);
    int x = 2;
    int y = 3;
    int sum = Adder.calculate(x, y);
    printf("sum = %d\n", sum);
}
