#include <stdio.h>
#include <stdlib.h>

int counter;

void set_counter()
{
     counter = 20;
}
int main(void)
{
    printf("counter = %d\n", counter); //default = 0
    set_counter();
    printf("counter = %d\n", counter);
    
    system("PAUSE");
    return 0;
} 
