#include <stdio.h>

int mult3(int i){
    if(i%3==0){
        return 1;
    }
    else{
        return 0;
    }
}

int mult5(int i){
    if(i%5==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    for(int i=1;i<=100;i++){
        if(mult3(i)==1&&mult5(i)==0){
            printf("Fizz\n");
        }
        else if(mult5(i)==1&&mult3(i)==0){
            printf("Buzz\n");
        }
        else if(mult5(i)==1&&mult3(i)==1){
            printf("FizzBuzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
}
