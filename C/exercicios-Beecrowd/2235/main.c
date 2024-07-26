#include <stdio.h>

int main() {
    
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  
    if (A + B == C || A + C == B || B + C == A || A == B || A == C || B == C){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}