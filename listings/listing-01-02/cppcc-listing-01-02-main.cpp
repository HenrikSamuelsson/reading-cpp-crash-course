int main()
{
    int x = 0;
    // Cast to void to suppress warnings about the useless below expressions.
    (void)(42 == x);  // Equality, false.
    (void)(42 != x);  // Inequality, true.
    (void)(100 > x);  // Greater than, true.
    (void)(123 >= x); // Greater than or equal to, true.
    (void)(-10 < x);  // Less than, true.
    (void)(-99 <= x); // Less than or equal to, true.
}
