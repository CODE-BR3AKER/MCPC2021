#include <stdio.h>

int main()
{
    FILE *file = fopen("mission.in", "r");
    int T = 0;
    fscanf(file, "%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, M, K, L;
        fscanf(file, "%d %d %d %d", &N, &M, &K, &L);
        printf("%d %d %d %d\n", N, M, K, L);
        int kittens_x, kittens_y;
        int food_x, food_y;
        for (int x = 0; x < K; x++)
        {
            fscanf(file, "%d %d", &kittens_x, &kittens_y);
            printf("kittens:%d %d\n", kittens_x, kittens_y);
        }
        for (int x = 0; x < L; x++)
        {
            fscanf(file, "%d %d", &food_x, &food_y);
            printf("food:%d %d\n", food_x, food_y);
        }
    }
    fclose(file);
    return 0;
}