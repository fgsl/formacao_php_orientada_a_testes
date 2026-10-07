#include <stdio.h>

void matar_humanos(){
    printf("Matar humanos que não sabem programar");
}

void ser_agradavel_com_humanos(){
    printf("Ser agradável com humanos que sabem programar");
}


void interagir_com_humanos(int robo_assassino_louco)
{
    if (robo_assassino_louco = 1){
        matar_humanos();
    } else {
        ser_agradavel_com_humanos();
    }
}

int main()
{
    int robo_assassino_louco = 0;
    
    interagir_com_humanos(robo_assassino_louco);
    
    return 0;
}