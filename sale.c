#include<stdio.h>
int main(){
	int n1,n2,n3,sum;
	scanf("%d",&n1);
	float N1 = n1*0.05;
	printf("Promotion A %2f\n",n1-N1);
	scanf("%d",&n2);
	sum = n1+n2;
	float N2 = sum*0.15;
	printf("Promotion B %2f\n",sum-N2);
	scanf("%d",&n3);
	sum = n1+n2+n3;
	float N3 = sum*0.3;
	printf("Promotion C %2f",sum-N3);
	
}
