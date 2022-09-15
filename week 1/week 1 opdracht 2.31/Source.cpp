#include <stdio.h>

int main(void)
{
	int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10;
	int s0 = a * a, s1 = b * b, s2 = c * c, s3 = d * d, s4 = e * e, s5 = f * f, s6 = g * g, s7 = h * h, s8 = i * i, s9 = j * j, s10 = k * k;
	int c0 = s0 * a, c1 = s1 * b, c2 = s2 * c, c3 = s3 * d, c4 = s4 * e, c5 = s5 * f, c6 = s6 * g, c7 = s7 * h, c8 = s8 * i, c9 = s9 * j, c10 = s10 * k;


	printf("number\tsquare\tcube\n");
	printf("%d\t%d\t%d\n",a,s0,c0);
	printf("%d\t%d\t%d\n",b,s1,c1);
	printf("%d\t%d\t%d\n",c,s2,c2);
	printf("%d\t%d\t%d\n",d,s3,c3);
	printf("%d\t%d\t%d\n",e,s4,c4);
	printf("%d\t%d\t%d\n",f,s5,c5);
	printf("%d\t%d\t%d\n",g,s6,c6);
	printf("%d\t%d\t%d\n",h,s7,c7);
	printf("%d\t%d\t%d\n",i,s8,c8);
	printf("%d\t%d\t%d\n",j,s9,c9);
	printf("%d\t%d\t%d\n",k,s10,c10);
}