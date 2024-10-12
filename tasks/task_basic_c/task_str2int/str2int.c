#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main() {
  char *input = "12345";
  char *endptr;
  long int result;
  result = strtol(input, &endptr, 10);
  if (errno != 0 || *endptr != '\0') {
    printf(""); 
  } else {
    printf("%ld\n", result);
  }
  return 0;
}

int str2int(const char *str) {
    return 0;
}
TEST(str2int, BasicTest) {
    EXPECT_EQ(str2int("0"), 0);
}