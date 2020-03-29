# include <stdio.h>

int main( )

{
	char s1[20];
	char s2[20];
	printf("请输入你的姓：");
	scanf("%s",s1);
	printf("请输入你的名：");
	scanf("%s",s2);
	printf("你的姓是：%s\n",s1);
	printf("你的名是：%s\n",s2);
	printf("你的姓名是：%s%s\n",s1,s2);
	return 0;
 } 
