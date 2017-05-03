#include <stdio.h>

int main(void)
{
	int i=0,s,ch;
	FILE *fp=fopen("mm.txt","w");
	ch=getchar();
	int string[11]={'H','a','p','p','y','@','S','i','n','a','.'};
	while(i<11)
	{
		s=string[i]+ch;
		if(s>122)
			s-=108;
		if(s<48)
			s=38;
		if((s>57)&&(s<64))
			s=64;
		if((s>90)&&(s<97))
			s=95;
		fprintf(fp,"%c",s);
		++i;
	}
	fclose(fp);
	return 0;
}