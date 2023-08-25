// C program to scan a sparse matrix and getting 3-tiple representation of it
#include <stdio.h>
int main() {
    int i,j,m,n,a[10][10];
    printf("Enter the no of rows and col of a matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter matrix A elements\n");
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
    }
    // printf("The matrix is\n");
    // for(i=0;i<m;i++)
    // {
    //      for(j=0;j<n;j++)
    //      {
    //          printf("%d ",a[i][j]);
    //      } printf("\n");
    // }

    int c = 1,b[10][3],count=0;
     for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
            if(a[i][j]!=0)
            {
                count=count+1;
                b[c][0]=i;
                b[c][1]=j;
                b[c][2]=a[i][j];
                c=c+1;
            }
         }
    }
    b[0][0]=m;
    b[0][1]=n;  
    b[0][2]=count;
     printf("3-tuple form of Matrix A is\n");
    for(i=0;i<count+1;i++)
    {
         for(j=0;j<3;j++)
         {
              printf("%d ",b[i][j]);
         } printf("\n");
         
    }


    int x[10][10];
    printf("/nEnter matrix B elements\n");
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
             scanf("%d",&x[i][j]);
         }
    }
    // printf("The matrix is\n");
    // for(i=0;i<m;i++)
    // {
    //      for(j=0;j<n;j++)
    //      {
    //          printf("%d ",a[i][j]);
    //      } printf("\n");
    // }
   
   
    int y[10][3],count2=0;  c=1;
    
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
         {
            if(x[i][j]!=0)
            {
                count2=count2+1;
                y[c][0]=i;
                y[c][1]=j;
                y[c][2]=x[i][j];
                c=c+1;
            }
         }
    }
    y[0][0]=m;
    y[0][1]=n;  
    y[0][2]=count2;
     printf("3-tuple form of Matrix B is\n");
    for(i=0;i<count2+1;i++)
    {
         for(j=0;j<3;j++)
         {
              printf("%d ",y[i][j]);
         } printf("\n");
         
    }
    


    
    return 0;
    // b and y as tuple matrix
     
}
