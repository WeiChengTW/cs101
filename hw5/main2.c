#include <stdio.h>

int main(){
    double PI=0.0;
    for(int i=0;i<1000000;i++){
        double sum=1.0/(2*i+1);
        if(i%2==0){
            PI+=sum;
        }
        else{
            PI-=sum;
        }
    }
    PI*=4;
    printf("%.5f",PI);
    return 0;
}
