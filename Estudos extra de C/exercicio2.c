#include <stdio.h>

int main(){
    int idade;

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    if ( idade < 12) {
        printf("Você é criança!\n");
    }else if (12 <= idade >= 17 ) {
        printf("Você é adolecente!\n");
    }else if (18 <= idade >= 59 ) {
        printf("Você é adulto!\n");
    }else if (idade >= 60){
        printf("Você é idoso!\n");
    }

    return 0;
}