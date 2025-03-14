#include <stdio.h>
int main(){
    int i=1;
    while(1){
        int n;
        scanf("%d",&n);
        if (n==0) break;
        else {
            printf("Case %d: %d\n",i,n);
        }
        i++;
    }
}
