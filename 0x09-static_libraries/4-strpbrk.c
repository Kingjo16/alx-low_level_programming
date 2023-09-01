#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept) {
  while (*s) {
    for (char *a = accept; *a; a++) {
      if (*s == *a) {
        return s;
      }
    }
    s++;
  }
  return NULL; 
}
