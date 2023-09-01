#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle) {
  char *h;
  char *n;
  
  for (h = haystack; *h != '\0'; h++) {
    n = needle;
    while (*n != '\0' && *h == *n) {
      h++;
      n++;
    }
    if (*n == '\0') {
      return h;
    }
  }
  return NULL;
}
