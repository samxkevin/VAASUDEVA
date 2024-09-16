#include <stdio.h>
int main()
{
   FILE *fp;
   char name[30]="\nabhijith""\nshiva""\nlaxman";
   fp=fopen("file1.txt","w");
   fprintf(fp,"hello world");
   fputs("\n hi friends",fp);
   fputc('A',fp);
   
   
   fprintf(fp,name);
	fclose(fp);
}



