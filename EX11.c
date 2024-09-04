  #include <stdio.h>

int main() {
   
  int M[3];
 int S[3];
 int T[3];
 int m;
 for(int i=0;i<3;i++){
       printf("enter M");
       scanf("%d",&M[i]);
       
        }
        for(int i=0;i<3;i++){
 printf("enter S");
      scanf("%d",&S[i]);
        }
      for(int i=0;i<3;i++){
        
         M[i]=S[i];
       printf("%d\n",M[i]);
  
      }
 
return 0;
}
