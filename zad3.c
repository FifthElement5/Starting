#include <stdio.h>
#include <stdlib.h>

float znajdzMin(float tablica[], int n) {

    //inicjalizacja min i max
    float min = tablica[0];



    for (int i =0; i < n; i++) {
        if (tablica[i] < min) {
            min = tablica[i];

   }

}
    return min;
}

float znajdzMax(float tablica[], int n)
{
    float max = tablica[0];
    for (int i=0; i < n; i++)
    {
        if(tablica[i] > max)
        {
            max = tablica[i];
        }
    }
    return max;
}

int main(void)
{
    float min, max;
    int n = 4;
    float tablica[] = {1.5, 5.2, 6.3, 8.2};



   min = znajdzMin(tablica, n);
   max  = znajdzMax(tablica, n);

    printf("Minimum: %.2f \n" , min);
    printf("Maximum: %.2f \n", max);
    return(0);
}

