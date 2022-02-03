//program to print matrix of pattern

#include<stdio.h>

void main()
{
    int m,n,i,j;
    
    printf("Add size of matrix\n") ;
    printf("Number of rows = ") ;
    scanf("%d",&m) ;
    printf("Number of columns = ") ;
    scanf("%d",&n) ;
    char arr[m][n] ;
    int size = m * n ;
    printf("Enter %d elements of matrix \n", size) ;
    for(i=0; i<m; i++)    
        for(j=0;j<n;j++)
            scanf("%s",&arr[i][j]) ;

    printf("\n") ;
    printf("The matrix is \n") ;    
    for(i=0; i<m; i++)    
    {
        for(j=0;j<n;j++)
            printf("%c\t",arr[i][j]) ;
         printf("\n") ;
    }
        

}
