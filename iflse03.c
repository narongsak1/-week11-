/*C=if else Ladder*/
#include<stdio.h>
int student3(){
    int number1,number2;
    printf("Student3 ");
    printf("Enter two integer: ");
    scanf("%d%d", &number1,&number2);
    //check if two integer are equa1
    if(number1==number2){
        printf("Result: %d=%d",number1,number2);
    }
    //check if number1 is greater than number2
    else if(number1>number2){
        printf("Result: %d>%d",number1,number2);
    }
    //check if both test expressions are false
    else{
       printf("Result: %d<%d",number1,number2);
    }
    return 0;
}

