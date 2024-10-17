#include <stdio.h>

void traversal()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The Elements in the array are:-\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insertion()
{
    int n, pos, value;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index for the element to be inserted at: ");
    scanf("%d", &pos);

    pos--; // Decrement the position by 1 to match the array index

    if (pos > n || pos < 0)
    {
        printf("Invalid position! Please enter a valid position.\n");
        return;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &value);

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    printf("The Elements in the Inserted array are:-\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void deletion()
{
    int n, del;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index for the element to be deleted: ");
    scanf("%d", &del);

    del--; // Decrement the position by 1 to match the array index

    if (del >= n || del < 0)
    {
        printf("Invalid position! Please enter a valid position.\n");
        return;
    }

    for (int i = del; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("The Elements in the deleted array are:-\n");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void search()
{
    int n, key, flag = 0, gps = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            gps = i;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The element %d is found at position %d\n", key, gps + 1);
    }
    else
    {
        printf("The element %d is not found in the array\n", key);
    }
}

int main()
{
    int choice;
    printf("Choose an operation:\n1. Traversal\n2. Insertion\n3. Deletion\n4. Search\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        traversal();
        break;
    case 2:
        insertion();
        break;
    case 3:
        deletion();
        break;
    case 4:
        search();
        break;
    default:
        printf("Invalid choice! Please enter a valid option.\n");
    }
    return 0;
}