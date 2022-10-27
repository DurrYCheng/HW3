# include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int times = 0;

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("從 %c 移到 %c\n", A, C);
        times++;
    }
    else {
        hanoi(n - 1, A, C, B);	//先將最底層以外的都移到B 
        hanoi(1, A, B, C);		//再把底層移到C 
        hanoi(n - 1, B, A, C);	//在花跟第一次一樣的次數，把B都移到C 
    }
}

int main() {
    int n;
    printf("輸入河內塔層數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("完成轉移需%d個步驟\n", times);
    system("pause");
    return 0;
}
