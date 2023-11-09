#include<stdio.h>
#include<math.h>
int main(){
	float toan,van,anh;
	printf("Nhap diem lan luot theo thu tu: toan, van, anh:\n");
	scanf("%f%f%f",&toan,&van,&anh);
	float Tong=toan+van+anh;
	float Diem_TB=Tong/3;
	printf("Tong=%.2f\n Diem TB=%.2f",Tong,Diem_TB);
}
