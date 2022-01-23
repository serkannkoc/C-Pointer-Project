// SERKAN KOÇ 150118073

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void reverseN(int *number,int N){
    int digit;
    int reverse = 0;
    int b = *number;// need a copy of number because after the next while loop the number will equal to zero
    int digit_counter = 0;
    while(b>0){
        b = b /10;
        digit_counter++;
    }
    while(*number>pow(10,digit_counter-N)){//reversing the number with the given N digits
        digit = *number % 10;
        reverse = reverse * 10 + digit;
        *number /= 10;
    }
    int y =(*number*pow(10,N))+reverse;
    printf("%d",y);

}

void clear (){
  while ( getchar() != '\n' );
}
int main()
{
    int number,N;
    scanf("%d",&number);
    clear();
    scanf("%d", &N);
    int number2 = number;
    int digit_counter = 0;
    while(number>0){
        number = number /10;
        digit_counter++;
    }
    if(N>digit_counter)
        printf("N must be less than %d!",digit_counter+1);
    else
        reverseN(&number2,N);
    return 0;
}


