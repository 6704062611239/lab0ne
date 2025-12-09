#include<stdio.h>
int main(){
	float n1,n2,n3,sum;
	scanf("%f",&n1);
	float N1 = n1*0.05;
	float x1 = n1-N1;
	printf("Promotion A %.2f\n",x1);
	float v1 = x1*0.07;
	printf("VAT 7 = %.2f",x1+v1);
	
	scanf("%f",&n2);
	sum = n1+n2;
	float N2 = sum*0.15;
	float x2 = sum-N2;
	printf("Promotion B %.2f\n",x2);
	float v2 = x2*0.07;
	printf("VAT 7 = %.2f",v2+x2);
	
	scanf("%f",&n3);
	sum = n1+n2+n3;
	float N3 = sum*0.3;
	float x3 = sum-N3;
	printf("Promotion C %.2f\n",x3);
	float v3 = x3*0.07;
	printf("VAT 7 = %.2f",v3+x3);
	
}
