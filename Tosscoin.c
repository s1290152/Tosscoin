#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  
  srand((unsigned int) time(NULL));
  char x[15];
  printf("Who are you?\n");
  scanf("%s",x);
  printf("Hello %s!\n",x);
   srand((unsigned int) time(NULL));
  printf("Tossing a coin...\n");
  int i,a,c=0;

  for(i=1;i<4;i++){
    a= rand()%2;	   
    if(a==0){
      printf("Round %d: Tails\n",i);
      c++;
    }
    else printf("Round %d: Head\n",i);
  }

 printf("Heads: %d, Tails: %d\n", 3-c,c);	
 if(c > 1)printf("%s lost!\n",x);
  else printf("%s won!\n",x);



}
