#include<stdio.h>
int main()
{
    int number, insert ,location;
    int temp2 ;
    printf("Enter size of the array: ") ;
    scanf("%d",&number) ;
    
    int arr[number+1] ;
    for(int i=0 ; i<number ; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    printf("Enter the number you want to insert: ") ;
    scanf("%d",&insert) ;
    printf("Enter the location : ") ;
    scanf("%d",&location) ;
    
    for(int i = number-1 ; i>=(location-1) ; i-- )
    {
        arr[i+1] = arr[i] ;
    }
    arr[location-1] = insert ;
    for(int i = 0 ; i<(number+1) ; i++)
    {
        printf("%d\t",arr[i]) ;
    }
    return 0;
}