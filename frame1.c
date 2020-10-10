#include<stdio.h>

//四則演算子を用いたある特定の計算式を計算する関数
int main(void){
    float x,y,z;
    printf("2x*(x+y)/{y*(x-y)}を行います\n");
    printf("自由にxとyを入力してください\n");
    scanf("%f %f",&x, &y);
    z=2*x*(x+y)/(y*(x-y));
    printf("計算結果:%7.3f\n",z);
    return 0;

}