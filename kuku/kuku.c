/***/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  printf("Hello.........!\n\n");

  for (uint16_t i = 1; i < 10; i++)
  {
    for (uint16_t j = 1; j < 10; j++)
    {
      printf(" %3d ", (i * j));
    }
    printf("\n");
  }
  printf("\n");

  return EXIT_SUCCESS;
} // main
// End
