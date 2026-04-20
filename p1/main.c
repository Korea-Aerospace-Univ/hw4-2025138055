#include <stdio.h>

int main(void)
{
    int answer;
    int guess;
    int count=0;
    
    scanf("%d", &answer);
    
    do{
        scanf("%d", &guess);
        count ++;
        
        if (guess>answer){
            printf("%d>?\n", guess, guess);
        }
        else if (guess<answer){
            printf("%d<?\n", guess, guess);
        }
        else{
            printf("%d==?\n", guess, guess);
        }
    }while (guess != answer);
    
    printf("시도횟수는 %d회\n", count);
   
    return 0;
}
