#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *p, *q;
    int i;
    p= (int *)malloc(5*sizeof(int));
    q=(int *)malloc(10*sizeof(int));
    p[0]=3,p[1]=5,p[2]=7,p[3]=9, p[4]=11;
    for(i=0;i<5;i++)
    printf("%d ",p[i]);
    printf("\n");
    for(i=0;i<5;i++)
    q[i]=p[i];
    for(i=0;i<5;i++)
     printf("%d ",q[i]);
     printf("\n");
     free(p);
     p=q;
     q=NULL;
     p[9]=99;// this insures the size of array p has been extended to 10
     printf("%d",p[9]);//and proof is here
     free(p);
     return 0;


 }