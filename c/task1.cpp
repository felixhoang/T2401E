#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of values in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the values of the array:\n");
    for (int i = 0; i < n; i++)
	{
        printf("Value %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int a = -1; 
    for (int i = 0; i < n; i++) 
	{
        if (array[i] > 0 && (a == -1 || array[i] < a))
		{
            a = array[i];
        }
    }

    if (a != -1)
	{
        printf("The smallest positive number in the array is: %d\n", a);
    } 
		else 
		{
        printf("No positive number found.\n");
    	}

    return 0;
}

