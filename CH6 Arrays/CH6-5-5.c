#include <stdio.h>

int main() {
    int aRows, aCols, bRows, bCols;
    int i, j, k;
    
    // 获取第一个矩阵的维度
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &aRows, &aCols);
    
    // 获取第二个矩阵的维度
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &bRows, &bCols);
    
    // 检查矩阵是否可以相乘
    if (aCols != bRows) {
        printf("The matrices cannot be multiplied with each other.\n");
        return 1;
    }
    
    int a[aRows][aCols], b[bRows][bCols], product[aRows][bCols];
    
    // 读取第一个矩阵的元素
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < aRows; i++) {
        for(j = 0; j < aCols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // 读取第二个矩阵的元素
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < bRows; i++) {
        for(j = 0; j < bCols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // 初始化乘积矩阵为0
    for(i = 0; i < aRows; i++) {
        for(j = 0; j < bCols; j++) {
            product[i][j] = 0;
        }
    }
    
    // 计算矩阵乘积
    for(i = 0; i < aRows; i++) {
        for(j = 0; j < bCols; j++) {
            for(k = 0; k < aCols; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // 打印矩阵乘积
    printf("Product of the two matrices is:\n");
    for(i = 0; i < aRows; i++) {
        for(j = 0; j < bCols; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
