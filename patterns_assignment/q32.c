#include <stdio.h>

int main() {

for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            if(i == j ||j==1 || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

        return 0;
}