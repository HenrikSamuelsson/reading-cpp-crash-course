#include <cstdio>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

int main()
{
    Operation operation = Operation::Divide;
    printf("%d", operation);
    return 0;
}
