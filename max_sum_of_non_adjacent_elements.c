#include<stdio.h>
#include<stdlib.h>
int FindMaxSum(int arr[], int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;

    for (i = 1; i < n; i++)
    {
        excl_new = (incl > excl)? incl: excl;
        incl = excl + arr[i];
        excl = excl_new;
    }
    return ((incl > excl)? incl : excl);
}
int main()
{
    int N,i;
    printf("Enter no. of elements: ");
    scanf("%d",&N);
    int *card=(int*)malloc(N*sizeof(int));
    for(i=0;i<=N-1;i++)
        scanf("%d",&card[i]);
  printf("Max possible sum with no adjacent elements included %d", FindMaxSum(card, N));
  return 0;
}
