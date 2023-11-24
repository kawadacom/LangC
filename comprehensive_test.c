#include<stdio.h>
int main(){
    for(int count = 1;count <= 25;count++){
        if(count % 3 == 0){
            printf("%d\n",count);
        }
    }
    int count = 26;
    while(count <= 50){
        if(count % 3 == 0){
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}