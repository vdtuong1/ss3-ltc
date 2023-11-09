#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2,n3,max,min;
	printf("n1=");
	scanf("%d",&n1);
	printf("n2=");
	scanf("%d",&n2);
	printf("n3=");
	scanf("%d",&n3);
	max=n1;
	min=n1;
	max=(max>n2) ? max : n2;
	min=(min>n2) ? n2 : min;
	max=(max>n3) ? max : n3;
	min=(min>n3) ? n3 : min;
	printf("max=%d\nmin=%d",max,min);
}
