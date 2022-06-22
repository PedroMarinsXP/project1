#include <stdio.h>

int main()
{
    int hora;

    printf("Digite a hora exata: ");
    scanf("%d", &hora);

    if (hora < 12){
        pintf("Bom dia!\n");
    }

    else{
        printf("Boa noite!\n");
    }

    return 0;
}


