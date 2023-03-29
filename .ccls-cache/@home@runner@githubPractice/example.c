#include <stdio.h>
void greeting(){
printf("Hello World\n");
}
int main(void) {
// greeting();
int result = 0;
scanf("%d", &result);
  if(result > 0){
    greeting();
  }
return 0;
}
