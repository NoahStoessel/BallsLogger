#include <stdio.h>

void error(int line, char message[]){
  printf("\033[91m");
  printf("[ERROR] %s at line: %d", message, line);
  printf("\n");
  printf("\033[0m");
}

void warning(int line, char message[]){
  printf("\033[93m");
  printf("[WARNING] %s at line: %d", message, line);
  printf("\n");
  printf("\033[0m");
}

void note(int line, char message[]){
  printf("\033[96m");
  printf("[NOTE] %s at line: %d", message, line);
  printf("\n");
  printf("\033[0m");
}

void test(int status, int line, int number, char message[]){
  if(status == 1){
    printf("\033[91m");
    printf("[TEST] FAILED: Test Number: %d %s At Line: %d", number, message, line);
    printf("\n");
  }
  if(status == 0){
    printf("\033[92m");
    printf("[TEST] PASSED: Test Number: %d %s At Line: %d", number, message, line);
    printf("\n");
  }
  if(status != 1 && status != 0) {
    printf("\033[93m");
    printf("UNKOWN STATUS!");
    printf("\n");
  }
  printf("\033[0m");
}
void success(int line, char message[]){
  printf("\033[92m");
  printf("[SUCCESS] %s At Line: %d", message, line);
  printf("\n");
  printf("\033[0m");
}





