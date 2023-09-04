#include <cstdio>

bool read_from(char* text, size_t length, size_t index, char* ch);
bool write_to(char* text, size_t length, size_t index, char ch);

int main()
{
    char lower[] = "abc?e";               
    printf("(1) lower = %s\n", lower);    
    printf("(2) sizeof lower = %d\n", sizeof lower);

    // Write a 'd' to the string at position 3 to replace the '?' character.
    if (!write_to(lower, sizeof lower, 3, 'd'))
    {
        printf("Write error!");
        return 1;
    }

    // Read back the 'd' character from the string.
    char letter_d{};
    if (read_from(lower, sizeof lower, 3, &letter_d))
    {
        printf("(3) letter_d = %c\n", letter_d);
    }
    else
    {
        printf("Read error");
    }
 
    printf("(4) lower = %s\n", lower);    // Print the string again.

    // Attempt to write outside of the string.
     if (!write_to(lower, sizeof lower, 5, 'f'))
    {
        printf("(5) Write error!");
    }
}

bool read_from(char* text, size_t length, size_t index, char* ch)
{
    if (index >= length - 1)
    {
        return false;
    }
    else
    {
        *ch = *(text + index); 
        return true;
    }
}

bool write_to(char* text, size_t length, size_t index, char ch)
{
    if (index >= length - 1)
    {
        return false;
    }
    else
    {
        *(text + index) = ch; 
        return true;
    }
}
