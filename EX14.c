    #include <stdio.h>

int main() {
   
  int M[3];
 
 int m;
int S=0;
 for(int i=0;i<3;i++){
       printf("enter M");
       scanf("%d",&M[i]);
       S += M[i];
       m=S/3;
        }
    
      printf("%d",m);
        

 
return 0;
}
