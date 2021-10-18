#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("eat.in", "r");
    int T = 0;
    fscanf(file, "%d", &T);
    for (int i = 0; i<T; i++){
        int A,B;
        fscanf (file,"%d %d", &A,&B);
        printf("Plate %d\n", A+B > A*B ? 1 : 2);
    }
    fclose(file);
    return 0;
}