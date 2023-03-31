# include<stdio.h>
# include<conio.h>
struct  bank
{
int acc_no ;
char name[20] ;
int bal ;
} b[3] ;

void  check( struct bank b[], int n )
{
int i ;
printf("\n Customer Details whose Balance < 100 Rs. \n") ;
printf(" ----------------------------------------------\n") ;
for( i = 0 ; i < n ; i++ )
{
      if( b[i].bal < 100 )
      {
            printf(" Account Number : %d\n",b[i].acc_no ) ;
            printf(" Name : %s\n",b[i].name ) ;
            printf(" Balance : %d\n",b[i].bal ) ;
            printf(" ------------------------------\n") ;
      }
}
}

int  main( )
{
int i ;
for( i = 0 ; i < 3 ; i++ )
{
      printf(" Enter Details of Customer %d\n", i+1 ) ;
      printf(" ------------------------------\n") ;
      printf(" Enter Account Number : ") ;
      scanf("%d",&b[i].acc_no) ;
      printf(" Enter Name : ") ;
      scanf("%s",b[i].name) ;
      printf(" Enter Balance : ") ;
      scanf("%d",&b[i].bal) ;
      printf(" ------------------------------\n") ;
}
check( b, 3 ) ;
return 0 ;
}

