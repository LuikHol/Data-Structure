#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "pilha.c"


int main() {
  char str[MAX];
  char str2[MAX];

  strcpy(str, "Raiar");
  if(is_palindrome(str)) {
    printf("%s e um palindromo\n", str);
  } else {
    printf("%s nao e um palindromo\n", str);
  }

  strcpy(str2, "Arroz");
  if(is_palindrome(str2)) {
    printf("%s e um palindromo\n", str2);
  } else {
    printf("%s nao e um palindromo\n", str2);
  }
  return 0;
}
