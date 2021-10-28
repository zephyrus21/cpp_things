#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *A;
  int size;
  int length;
};

void add(struct Array *arr)
{
  for (int i = 0; i < arr->length; i++)
    scanf("%d", &(arr->A)[i]);
}

void display(struct Array *arr)
{
  for (int i = 0; i < arr->length; i++)
    printf("%d", arr->A[i]);
}

void createArray(struct Array *arr, int t_size, int u_size)
{
  arr->size = t_size;
  arr->length = u_size;
  arr->A = (int *)malloc(arr->size * sizeof(int));
}

int main()
{
  struct Array arr;
  createArray(&arr, 10, 2);
  add(&arr);
  display(&arr);
  return 0;
}
