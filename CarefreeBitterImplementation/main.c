#include <stdio.h>
int main(void)
{
    int end = 1;
    int a;
    int num;
    scanf("%d",&num);
    for ( int i = 0; ; i++){
        end += (6 * i);
        if ( num <= end){
            a = i + 1;
            break;
        }
    }
    
    printf("%d", a);
    return 0;
}