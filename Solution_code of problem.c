#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int m,n;
    scanf("%d %d",&m,&n);
    int q=n%m;
    printf("%d\n",q);
}
return 0;}
