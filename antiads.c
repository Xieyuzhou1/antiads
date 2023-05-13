#include<stdio.h>
int main()
{
	FILE* fp;
	if((fp=fopen("C:\\Windows\\system32\\drivers\\etc\\hosts","a+"))==NULL)
	{
		printf("´ò¿ªÊ§°Ü!");
		return 0;
	}
	fprintf(fp,"\n0.0.0.0 cpro.baidu.com\n0.0.0.0 pos.baidu.com\n");
	return 0;
}
