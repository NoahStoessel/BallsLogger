#include "logger.h"
#include <stdio.h>



int main(){
  printf("LOGGER TESTS: \n");
  printf("BUFFER TEST \n");
  error(15, "ERROR TEST");
  printf("BUFFER TEST \n");
  warning(15, "WARNING TEST");
  printf("BUFFER TEST \n");
  note(15, "NOTE TEST");
  printf("BUFFER TEST \n");
  test(1, 15, 1, "FAIL TEST");
  printf("BUFFER TEST \n");
  test(0, 15, 1, "SUCCESS TEST");
  printf("BUFFER TEST \n");
  test(15, 15, 1, "INVALID STATUS TEST");
  printf("BUFFER TEST \n");
  success(15, "SUCCESS FUNC TEST");
  printf("BUFFER TEST \n");
}
