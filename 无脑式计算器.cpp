#include<stdio.h>
int main()
{
	int i,n,j,k,l,a,b,c;
	printf("输入第一个数:");
	scanf("%d",&i);
	j=i;
	printf("输入第二个数:");
	scanf("%d",&n);
	k=n;
	l=(j+k);
	a=(j-k);
	b=(j*k);
	c=(j/k);
	printf("两数相加是%d\n",l);
	printf("两数相减是%d\n",a);
	printf("两数相乘是%d\n",b);
	printf("两数相除是%d\n",c);
	return 0;
}
