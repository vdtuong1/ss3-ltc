#include<stdio.h>
int main(){
	const float PI=3.14;
	int r;
	printf("r= ");
	scanf("%d",&r);
	int circle_area = r*r*PI;
	int diameter_of_the_circle = r*2*PI;
	printf("circle area=%d\n diameter of the circle=%d\n",circle_area,diameter_of_the_circle);
}
