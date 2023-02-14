#include <stdio.h>

int main()
{
    int array[50000];
    for(int i = 50000, j = 0; i > 0; --i, j++ )
        {
            array[j] = i;
        }

    printf("Array before sorting: ");
    for(int i = 0; i < 50000; i++)
    {
        printf("%d ", array[i]);
        if(i%20==0)
            printf("\n");
    }

    int tmpVariable;
    for(int i = 0; i < 50000; i++)
        {
            for(int j = i+1; j < 50000; j++)
            {
                if(array[i]>array[j])
                {
                    tmpVariable = array[i];
                    array[i] = array[j];
                    array[j] = tmpVariable;
                }
            }
        }

    printf("\n\nArray after sorting: ");
    for(int i = 0; i < 50000; i++)
    {
        printf("%d ", array[i]);
        if(i%20==0)
            printf("\n");
    }
    return 0;
}