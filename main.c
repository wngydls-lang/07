#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i = 10;
  printf("before i = %d\n", i);
  i = inc(i); //��ȯ���� �̿�  
  printf("after i = %d\n", i);
  
  system("PAUSE");
  return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}

