#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv){
    
    float D;

    printf("Distance Metre : \n");
    scanf("%f", &D);

    D /= 1609.334;

    printf("Distance Mile : %f\n", D);

    return 0;
}
