#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
*main - refinex code
*Return: 0
*/
int main(void)
{
int product;
double density, vescosity, ves, flash_point;



printf("1.Grade3(HFO)\n2.IP\n3.LCO\nSelect product's number: ");
scanf("%d", &product);


if (product == 2)
{
printf("Enter the density: ");
scanf("%lf", &density);
printf("Enter vescosity @40: ");
scanf("%lf", &vescosity);
printf("Enter flash point in degree: ");
scanf("%lf", &flash_point);
printf("Densiy is: %.4lf\nVescosity: %.2lf\nflash_point: %.2lf\n", density, vescosity, flash_point);
}
else if (product == 1)
{
printf("Enter the density: ");
scanf("%lf", &density);
printf("Enter vescosity @50: ");
scanf("%lf", &vescosity);
printf("Enter flash point in degree: ");
scanf("%lf", &flash_point);
printf("Densiy is: %.4lf\nVescosity: %.2lf\nflash_point: %.2lf\n", density, vescosity, flash_point);
}
else if (product == 3)
{
printf("Enter the density: ");
scanf("%lf", &density);
printf("Enter vescosity @50: ");
scanf("%lf", &vescosity);
printf("Enter vescosity @40: ");
scanf("%lf", &ves);
printf("Enter flash point in degree: ");
scanf("%lf", &flash_point);
printf("Densiy is: %.4lf\nVescosity @50: %.2lf\nVescosity @40: %.2lf\nflash_point: %.2lf\n", density, vescosity, ves, flash_point);
}
else
{
printf("NO product found!!\n");
}
return (0);
}
