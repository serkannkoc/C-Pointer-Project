// SERKAN KOÇ 150118073
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag0 = 1;
    printf("Welcome to the letter printer.\n");
while(flag0==1){
    printf("Enter the size: ");
    int size;
    int flag = 1;
    while(flag == 1){
        scanf("%d",&size);
        if(size < 5 || size % 2 ==0)
            printf("Invalid size. Enter the size again: ");
        else
            flag = 0;
    }

    printf("Enter the letter: ");
    char letter;
    int flag2 = 1;
    while(flag2 == 1){
        scanf(" %c",&letter);
        if(letter == 'w' || letter == 'z' || letter == 'y' || letter == 'x')
             flag2 = 0;
        else
           printf("Invalid letter. Enter the letter again: ");
    }

    if(letter == 'x'){
        for(int i = 1; i<=size; i++){
            for(int k = 1; k<=size; k++){
                if(k==i || k==size-i+1)
                    printf("*");
                else
                    printf(" ");
            }
                    printf("\n");
        }

    }
    else if(letter =='z'){
            for(int i = 1; i<=size+1;i++){
                for(int k = 1;k<=size;k++){
                    if(i==1||i==size+1)
                        printf("*");
                    else if(i>1 && i+1<=size+1 && k==size-i+2)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
    }
    else if(letter =='w'){
        for(int i =1;i<=size;i++){
            for(int k = 1;k<=size*4-3;k++){
                if(k<=size){
                    if(i==k)
                        printf("*");
                    else
                        printf(" ");
                }
                else if(k>size&&k<=size*2-1){
                    if(k+i==2*size)
                        printf("*");
                    else
                        printf(" ");
                }
                else if(k>=2*size&&k<=size*3-2){
                    if(k-i==2*size-2)
                        printf("*");
                    else
                        printf(" ");
                }
                else if(k>size*3-2&&k<=size*4-3){
                    if(k+i==size*4-2)
                        printf("*");
                    else
                        printf(" ");
                }

            }
            printf("\n");
        }
    }
    else if(letter == 'y'){
        for(int i=1;i<=size;i++){
            for(int k = 1; k<=size;k++){
                if(i<=size /2+1){
                    if(k==i||k==size-i+1)
                        printf("*");
                    else
                        printf(" ");
                }
                else if(i>size/2+1){
                    if(k==size/2+1)
                        printf("*");
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
    }
    char continue_or_not;
    printf("Would you like to continue? (Y or N): ");
    scanf(" %c", &continue_or_not );
    if(continue_or_not=='n'){
         flag0 = 0;
         printf("Goodbye :)");
    }
    else
        flag0=1;
}




return 0;
}
