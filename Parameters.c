#include <stdio.h>
#include <stdlib.h>

int PassbyValue(int a, int b)
{
    return a + b;
}

int PassbyReference(int *a, int *b)
{
    return *a + *b;
}

int PassbyArray(int arr[], int num)
{
    if (num <= 0)
    {
        return 0;
    }
    return arr[num - 1] + PassbyArray(arr, num - 1);
}

int *PassbyPointer(int n)
{
    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1); // Terminate if memory allocation fails
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    return p;
}

int main()
{
    int choice;
    printf("Choose an operation: \n1) Pass by value \n2) Pass by reference \n3) Pass by Array \n4) Pass by pointer\n");
    scanf("%d", &choice);

    int a, b, x, y, n;

    switch (choice)
    {
    case 1:
    {
        // Pass by value
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum (Pass by Value): %d\n", PassbyValue(a, b));
        break;
    }

    case 2:
    {
        // Pass by reference
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("Sum (Pass by Reference): %d\n", PassbyReference(&x, &y));
        break;
    }

    case 3:
    {
        // Pass by array
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Array size must be greater than 0.\n");
            return 1; // Exit if the array size is invalid
        }
        int arr[n]; // Declare the array after reading the size
        for (int i = 0; i < n; i++)
        {
            printf("Enter Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("Sum (Pass by Array): %d\n", PassbyArray(arr, n));
        break;
    }

    case 4:
    {
        // Pass by pointer
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Array size must be greater than 0.\n");
            return 1;
        }
        int *p = PassbyPointer(n);
        printf("The elements in the array are:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", p[i]);
        }
        printf("\n");
        free(p); // Free the allocated memory
        break;
    }

    default:
        printf("Invalid choice! Please enter a valid option.\n");
    }

    return 0;
}
