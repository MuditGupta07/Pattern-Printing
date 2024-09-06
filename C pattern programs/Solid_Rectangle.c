#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    printf("Enter number of stars in each line: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//Output
/*
Enter number of lines: 4
Enter number of stars in each line: 5
* * * * *
* * * * *
* * * * *
* * * * *
*/