#include<stdio.h>

int main(){
    int rows, cols , i, j;

    printf("Enter rows and columns of rectangle\n");
    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++){

        for(j = 0; j < cols; j++){
           printf("*");
        }
        printf("\n");
    }

    int number, a, k, count = 1;

    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (a = 1; a <= count; a++)
            printf(" ");
        count--;
        for (a = 1; a <= 2 * k - 1; a++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (a = 1; a <= count; a++)
             printf(" ");
         count++;
         for (a = 1 ; a <= 2 *(number - k)-  1; a++)
             printf("*");
         printf("\n");
      }
      return 0;
}
