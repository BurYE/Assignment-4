#include <stdio.h>
#include <stdlib.h>
int main()
{
  /*Stack vs. Heap
  Stack is used for STATIC vars, whose requirements dont change. Memory for the stack is reserved when
  the program starts -- it contains space for all variables in the program, plus some scratch space. */
  printf("\nworking\n\n");
//I don't get this..... but the hellow world is an array - a character array
  char helloworld[] = "helloworld";
  //char helloworld[11] = {"h","e","l","l","o","w","o","r","l","d","\0"}

//create a variable on the heap
  char *oddchars;
  oddchars = malloc(21 * sizeof(char));

  for(int i = 0; i < 20; i++)
  {

      oddchars[i] = helloworld[i%10];
      printf("%d", i%10);
  }
oddchars[20] = '\0';
  printf("\n\n%s\n\n", oddchars);

  free(oddchars);
  return 0;
}
