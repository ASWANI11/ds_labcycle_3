
/* C Program to Implement Selection Sort using Functions  */

#include <stdio.h>

int findmax(int b[10], int k);
void exchang(int b[10], int k);

int main()
{
    int array[10];
    int i, j, n, temp;

    printf("How many elements u want to Sort :: ");
    scanf("%d", &n);

    printf("\nEnter [ %d ] elements below to be Sorted :: \n",n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter [ %d ] Element :: ",i+1);
        scanf("%d", &array[i]);
    }

    printf("\nUnsorted Elements in List are :: \n\n");
    for (i = 0; i < n ; i++)
    {
        printf("%d  ", array[i]);
    }

    /*  Selection sorting begins */

    exchang(array, n);

    printf("\n\nAfter implementing Selection Sort, Sorted List is :: \n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n");

    return 0;
}

/*  function to find the maximum value */
int findmax(int b[10], int k)
{
    int max = 0, j;
    for (j = 1; j <= k; j++)
    {
        if (b[j] > b[max])
        {
            max = j;
        }
    }
    return(max);
}
void exchang(int b[10], int k)
{
    int  temp, big, j;
    for (j = k - 1; j >= 1; j--)
    {
        big = findmax(b, j);
        temp = b[big];
        b[big] = b[j];
        b[j] = temp;
    }
    return;
}

