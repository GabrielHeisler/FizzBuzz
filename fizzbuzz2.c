#include <stdio.h>

int main(){
    for(int i=1;i<=100;i++){
        if (!(i % 3)) {
          if (!(i % 5)) {
            printf("FizzBuzz\n");
          } else {
            printf("Fizz\n");
          }
          continue;
        }
        if (!(i % 5)) {
          printf("Buzz\n");
          continue;
        }
        printf("%d\n", i);
    }
}
