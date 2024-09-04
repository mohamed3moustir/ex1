   #include <stdio.h>

int main() {

 
 int n;
  int M[5];
    int S=0;
    printf("enter num n");
    scanf("%d",&n);
   for(int i=0;i<n;i++){
       
       printf("enter num");
   scanf("%d",&M[i]);
   S+=M[i];
   
   }
     printf("%d",S);
 
return 0;
}
