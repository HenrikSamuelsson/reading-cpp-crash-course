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
            result = a * b;
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
    int x = 2;    // First dummy operand used to test the Calculator
    int y = 3;    // Second dummy operand used to test the Calculator
    
    Calculator adder(Operation::Add);
    int sum = adder.calculate(x, y);
    printf("sum = %d\n", sum);

    Calculator subtractor(Operation::Subtract);
    int difference = subtractor.calculate(x, y);
    printf("difference = %d\n", difference);

    Calculator multiplier(Operation::Multiply);
    int product = multiplier.calculate(x, y);
    printf("product = %d\n", product);

    Calculator divider(Operation::Divide);
    int quota = divider.calculate(x, y);
    printf("quota = %d\n", quota);
}
