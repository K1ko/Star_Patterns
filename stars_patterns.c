#include <stdio.h>


void square_stars()
{
   int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n); 
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }
}
void triangle_stars()
{
    int n;
    printf("Enter the number of rows\n");  
    scanf("%d",&n); 
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<=i;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }
}
void hollow_Square_Star_pattern()
{
    int n; 
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            if(i==0 || i==n-1 || j==0 || j==n-1)  
            {  
                printf("*");  
            }  
            else  
            {  
                printf(" ");  
            }  
        }  
        printf("\n");  
    }
}
void hollow_with_diagonals(){
    int n; 
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            if(i==0 || i==n-1 || j==0 || j==n-1 || i==j || i+j==n-1)  
            {  
                printf("*");  
            }  
            else  
            {  
                printf(" ");  
            }  
        }  
        printf("\n");  
    }
}
void rhobus_Star_pattern(){
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
}
void hollow_rhobus_star_pattern()
{
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            if(i==n || i==1 || k==1 || k==n)  
            {  
                printf("*");  
            }  
            else  
            {  
                printf(" ");  
            }  
        }  
        printf("\n");  
    }  
}
void mirror_rhobus()
{
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
           printf("*");  
              
        }  
        printf("\n");  
    }  
}
void hollow_mirror_rhobus()
{
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
         if(i==1 || i==n || k==1 || k==n)  
           printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }
}
void hollow_triangle(){
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }
}
void mirror_right_triangle(){
     int n,m=1;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    } 
}
void hollow_mirror_triangle()
{
    int n,m=1;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
           if(k==1 || k==m || m==n)  
            printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
        m++;  
    }
}
void inverted_triangle(){
    int n;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n-i+1;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }
}
void hollow_inverted_triangle()
{
     int n,m=1;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
         if(j==1 || j==i || i==n)  
          printf("*");  
          else  
          printf(" ");  
      }  
      printf("\n");  
    } 
}
void mirror_right_inverted_triangle()
{
    int n,m;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
           printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }
}
void hollow_mirror_inverted_triangle()
{
    int n,m;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
          if(i==1 || k==1 || k==m)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    } 
}
void pyramid_star_pattern()
{
    int n,m;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }
}
void hollow_pyramid_star_pattern()
{
    int n,m;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         if(i==n || k==1 || k==2*i-1)  
         printf("*");  
         else  
         printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    }
}
void inverted_pyramid_star_pattern()
{
    int n,m=1;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }
}
void hollow_inverted_pyramid_Star_pattern()
{
    int n,m=1;  
    printf("Enter the number of rows\n");  
    scanf("%d",&n);  
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m++;  
     
      printf("\n");  
    }
}
void half_diamond()
{
     int n,m=1;  
    printf("Enter the number of columns\n");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(int i=n-1;i>=1;i--)  
 {  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }
}
void diamond_star_pattern()
{
    int n;  
  printf("Enter the number of rows\n");  
  scanf("%d",&n);  
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");  
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }
}
void right_arrow_pattern()
{
    int n;  
  printf("Enter the number of columns\n");  
  scanf("%d",&n);  
  //printing the upper part of the pattern..  
 for(int i=0;i<n;i++)  
 {  
   for(int j=0;j<i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=1;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<n-i;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}
}
void left_arrow_star(){
    int n;  
  printf("Enter the number of columns\n");  
  scanf("%d",&n);  
  //printing the upper part of the pattern..  
 for(int i=1;i<=n;i++)  
 {  
   for(int j=1;j<=n-i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=0;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<i+1;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
} 
}

void plus_star_pattern()
{
     int n;  
  printf("Enter the odd number only\n");  
  scanf("%d", &n);  
  for(int i=1;i<=n;i++)  
  {  
    if(i==((n/2)+1))  
    {  
      for(int j=1;j<=n;j++)  
      {  
        printf("+");  
      }  
   
    }  
    else  
    {  
    for(int j=1;j<=n/2;j++)  
    {  
      printf(" ");  
    }  
    printf("+");  
    }  
    printf("\n");  
  }
}
void x_star_pattern()
{
    int n,m;  
  printf("Enter the number\n");  
  scanf("%d",&n);  
  m=2*n-1;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("*");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
  }
}
void star_pattern()
{
  int N,i,k;
    printf("Enter the number of rows\n");
    scanf("%d",&N);
    if(N<1 || N > 15){printf("Wrong input: ");return;}
    else
    for (i=0;i < N;i++){ //rows
        for(k =0; k < N; k++){ //columns
            if((k == N/2) || (i == N/2) || (k == i) || (k == N - i - 1))
                printf("*");
            else 
                printf("_"); // space

        }
        printf("\n");
    }
}
int main()
{  
    hollow_Square_Star_pattern();
    hollow_with_diagonals();
    rhobus_Star_pattern();
    hollow_rhobus_star_pattern();
    mirror_rhobus();
    hollow_mirror_rhobus();
    square_stars();
    hollow_triangle();
    triangle_stars();
    mirror_right_triangle();
    hollow_mirror_triangle();
    inverted_triangle();
    hollow_inverted_triangle();
    //mirror_inverted_triangle();
    hollow_mirror_inverted_triangle();
    pyramid_star_pattern();
    hollow_pyramid_star_pattern();
    inverted_pyramid_star_pattern();
    hollow_inverted_pyramid_Star_pattern();
    half_diamond();
    diamond_star_pattern();
    right_arrow_pattern();
    left_arrow_star();
    plus_star_pattern();
    x_star_pattern();
    star_pattern();
    return 0;
}