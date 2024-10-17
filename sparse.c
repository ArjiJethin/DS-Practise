#include <stdio.h>
int main()
{
    int sparse[6][6] = {{0, 0, 5, 0, 7, 0},
                        {0, 6, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 9},
                        {0, 0, 7, 0, 0, 0},
                        {0, 0, 0, 8, 0, 0},
                        {0, 0, 0, 0, 9, 0}};
    int size = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (sparse[i][j] != 0)
            {
                size++;
            }
        }
    }

    int matrix[3][size];
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (sparse[i][j] != 0)
            {
                matrix[0][k] = sparse[i][j];
                matrix[1][k] = i;
                matrix[2][k] = j;
                k++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}