// Calculate the number of possible paths in the grid
// add both the food and the kittens to a 2d array that you pass to the function as arguments
// If the button array is empty then we only need to exclude paths that contains cells of kittens
// if the button array is not empty then we need also to exclude paths that does not contain at least one button and to

/*
Logic of the function:
    Mark the current cell as visited
    If the current cell is a valid and open cell
        go down (x, y) ——> (x + 1, y)
        go right (x, y) ——> (x, y + 1)
    backtrack from the current cell and remove it from the current path
    return count
*/

/*
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
        int kittens[K][2];
        int btns[L][2];
        for (int x = 0; x < K; x++)
        {

            fscanf(file, "%d %d", &kittens[x][0], &kittens[x][1]);
            printf("Kittens:%d %d\n", kittens[x][0], kittens[x][1]);
        }
        for (int x = 0; x < L; x++)
        {
            fscanf(file, "%d %d", &btns[x][0], &btns[x][1]);
            printf("Buttons:%d %d\n", btns[x][0], btns[x][1]);
        }
        printf("%d\n", countPaths(N, M, btns, kittens));
    }
    fclose(file);
    return 0;
}*/