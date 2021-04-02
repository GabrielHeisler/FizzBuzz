#include <stdio.h>
#include <stdbool.h>

bool mult3(int i){
    return i%3==0;
}

bool mult5(int i){
    return i%5==0;
}

int main(){
    for(int i=1;i<=100;i++){
        if(mult3(i)&&!mult5(i)){
            printf("Fizz\n");
        }
        else if(mult5(i)&&!mult3(i)){
            printf("Buzz\n");
        }
        else if(mult5(i)&&mult3(i)){
            printf("FizzBuzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
}
