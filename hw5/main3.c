#include <stdio.h>

int main(){
    int N=0;
    for(int i=1,j=1;i<=9;j++){
        N=i*j;
        printf("%d*%d=%2d",i,j,N);
        if(j%9==0){
            j=0;
            i++;
            printf("\n");
        }
    }
    return 0;
}
