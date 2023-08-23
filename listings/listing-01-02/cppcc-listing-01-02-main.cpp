int main()
{
    int x = 0;
    // Cast to void below to suppress warnings about the useless expressions.
    (void)(42 == x);    // Equality, false.
    (void)(42 != x);    // Inequality, true.
    (void)(42 > x);     // Greater than, true.
    (void)(42 >= x);    // Greater than or equal to, true.
    (void)(-1 < x);     // Less than, true.
    (void)(-1 <= x);    // Less than or equal to, true.
}
