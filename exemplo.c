#include <stdio.h>

int main(){
    int oi = 0;
    scanf("%d", &oi);
    if (oi == 0){
        printf("isso é zero\n");
    }
    else if (oi == 1)
    {
        printf("Agora é 1\n");
    }
    
    else {
        printf("Isso não é 0 nem 1\n");
    }
    return(0);
}