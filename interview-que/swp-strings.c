#include <stdio.h>

/* Swaps strings by swapping pointers */ 

void swap1(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}  

#if 0
void swap2(char **str1_ptr, char **str2_ptr)
{
  *str1_ptr = (char)*str1_ptr ^ (char)*str2_ptr;
  *str2_ptr = (char)*str1_ptr ^ (char)*str2_ptr;
  *str1_ptr = (char)*str1_ptr ^ (char)*str2_ptr;

  *srtr1_ptr = 
}  
#endif 

int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";
  swap2(&str1, &str2);
  printf("str1 is %s, str2 is %s\n", str1, str2);
  getchar();
  return 0;
}
