#include <stdio.h>

typedef struct
{
int lengh;
int width;
} rectangle;
typedef struct
{
int x;
int y;
} plan;
typedef struct
{
rectangle rectangle;
plan plan;
} house;

int main()
{
rectangle mystruct = {2, 4};
printf("lengh %d width %d\n", mystruct.lengh, mystruct.width);
plan plan = {5, 10};
printf("front %d side %d\n", plan.x, plan.y);
house manqoba = {{2, 4}, {5, 10}};
printf("size %d %d\nshape %d %d\n", manqoba.rectangle.lengh, manqoba.rectangle.width, manqoba.plan.x, manqoba.plan.y);
//house *p = &manqoba;
//printf("pointer %d\n", *p->plan.x);
return (0);
}
