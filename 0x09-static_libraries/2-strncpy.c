#include "main.h"
#include <stdio.h>

char *_strncpy(char *dest, char *src, int n) {
  for (int i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  for (int j = n; j < _strlen(src); j++) {
    dest[j] = '\0'; 
  }
  return dest;
}
