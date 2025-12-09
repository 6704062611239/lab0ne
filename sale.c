#include<stdio.h>
int main(){
	float n1,n2,n3,sum;
	scanf("%f",&n1);
	float N1 = n1*0.05;
	printf("Promotion A %.2f\n",n1-N1);
	scanf("%f",&n2);
	sum = n1+n2;
	float N2 = sum*0.15;
	printf("Promotion B %.2f\n",sum-N2);
	scanf("%f",&n3);
	sum = n1+n2+n3;
	float N3 = sum*0.3;
	printf("Promotion C %.2f\n",sum-N3);
	float x = sum-N3;
	float v = x*0.07;	
	printf("VAT 7 = %.2f",x-v);
}
