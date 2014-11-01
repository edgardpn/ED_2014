#include <stdio.h>
#include <stdlib.h>

     

    /*Função para calcular o no GAP*/

    int newgap(int gap)

    {

        gap = (gap * 10) / 13;

        if (gap == 9 || gap == 10)

            gap = 11;

        if (gap < 1)

            gap = 1;

        return gap;

    }

     

    /*Função que executa o método Comb Sort*/

    void combsort(int a[], int aSize)

    {

        int gap = aSize;

        int temp, i;

        for (;;)

        {

            gap = newgap(gap);

            int swapped = 0;

            for (i = 0; i < aSize - gap; i++) 

            {

                int j = i + gap;

                if (a[i] > a[j])

                {

                    temp = a[i];

                    a[i] = a[j];

                    a[j] = temp;

                    swapped  =  1;

                }

            }

            if (gap  ==  1 && !swapped)

                break;

        }

    }

    int main ()

    {

        int n, i;
        int *a;
        n=100;
           
        FILE *inputfile;
        inputfile = fopen("input.txt", "r");

        a  =  (int *)calloc(n, sizeof(int));

        for (i = 0;i< n;i++){
        
            fscanf(inputfile, "%d", &a[i]);
        }

        printf("\nValores inseridos:\n");      

        for(i = 0;i < n;i++){

             printf("%d ", a[i]);

        }

        combsort(a, n);

        printf("\nValores ordenados:\n");        

        for(i = 0;i < n;i++){

            printf("%d ", (a[i]));

        }
        printf("\n\n");
        return 0;

    }
