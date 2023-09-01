char *_strncat(char *dest, char *src, int n) {
  int i = 0;
  while (dest[i] != '\0') {
    i++;
  }
  for (int j = 0; j < n && src[j] != '\0'; j++) {
    dest[i] = src[j];
    i++;
  }
  dest[i] = '\0';
  return dest;
}
