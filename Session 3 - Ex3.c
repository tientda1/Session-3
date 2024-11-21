#include<stdio.h>
int main(){
	float PI = 3.14;
	float radius;
	printf("Nhap ban kinh: ");
	scanf("%f", &radius);
	float chuvi = radius*2*PI;
	float dientich = radius*radius*PI;
	printf("Chu vi hinh tron la: %.2f", chuvi);
	printf("Dien tich hinh tron la: %.2f",dientich);
	
	return 0;
}
