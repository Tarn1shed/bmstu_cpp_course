#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int str2int () {
  char *input = "12345";
  char *endptr;
  long int result;

  result = strtol(input, &endptr, 10);

  // Проверка ошибок
  if (errno != 0 || *endptr != '\0') {
    printf(""); 
  } else {
    printf("%ld\n", result);
  }

  return 0;
}
