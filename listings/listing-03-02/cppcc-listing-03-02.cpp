#include <cstdio>

int main()
{
    // Create storage for an int variable, will be set to 0.
    int gettysburg{};

    // Create an int pointer and set it to point at the address of gettysburg.
    int *gettysburg_address = &gettysburg;

    // Print to see value and address.
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    
    // Change the value at the address of gettysburg by use of dereference.
    *gettysburg_address = 17325;

    // Print again to check that gettysburg was updated.
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);

    return 0;
}
