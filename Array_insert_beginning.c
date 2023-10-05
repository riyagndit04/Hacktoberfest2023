#include <stdio.h>
int main()
{
    int a[50], size, i, num, pos;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter data you want to insert: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size + 1)
    {
        printf("invalid position");
    }
    else
    {
        for (i = size - 1; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = num;
        size++;
    }
    printf("elements in array are: ");
for(i=0;i<size;i++)
{
    printf("%d",a[i]);
}

}
