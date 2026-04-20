#include <stdio.h>

int main(void)
{
    int N;
    char ch;
    
    int max_alpha=0; //소문자 최대 연속 횟수
    int current_alpha=0; //소문자 현재 연속 횟수
    int max_digit=0; //숫자 최대 연속 횟수
    int current_digit=0; //숫자 현재 연속 횟수
    
    scanf("%d", &N);
    
    getchar();
    
    for (int i=0; i<N; i++){
        scanf ("%c", &ch);
        
        if (ch>='a' && ch<='z'){
            current_alpha+=1;
            current_digit=0;//소문자 나오니까 알파벳은 0
    
            if (current_alpha>max_alpha){
                max_alpha=current_alpha;
            }
        }
        else if (ch>='0' && ch<='9'){
            current_digit+=1;
            current_alpha=0;//숫자 나오니까 알파벳은 0
    
            if (current_digit>max_digit){
                max_digit=current_digit;
            }
        }
        else{
            current_alpha=0;
            current_digit=0;
        }
    }
    
    printf("%d\n", max_alpha);
    printf("%d\n", max_digit);
    
    return 0;
}
