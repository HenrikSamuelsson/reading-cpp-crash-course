#include <cstdio>

bool read_from(char* text, size_t length, size_t index, char* ch);
bool write_to(char* text, size_t length, size_t index, char ch);

int main()
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    printf("before\nlower: %s\nupper: %s\n", lower, upper);

    if (!write_to(lower, sizeof lower, 3, 'd'))
    {
        printf("Write error!");
        return 1;
    }

    if (!write_to(upper, sizeof upper, 3, 'D'))
    {
        printf("Write error!");
        return 1;
    }
    
    char letter_d{};
    if (read_from(lower, sizeof lower, 3, &letter_d))
    {
        printf("letter_d = %c\n", letter_d);
    }
    else
    {
        printf("Read error");
    }

    char letter_D{};
    //lower[3] = 'd';               // lower now contains a b c d e \0
    //upper_ptr[3] = 'D';           // upper now contains A B C D E \0
    
   
    
    printf("after\nlower: %s\nupper: %s\n", lower, upper);
}

bool read_from(char* text, size_t length, size_t index, char* ch)
{
    if (index >= length)
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
    if (index >= length)
    {
        return false;
    }
    else
    {
        *(text + index) = ch; 
        return true;
    }
}

