#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_IN 1024

int main(int argc,char*argv[]){

    if (argc < 2)                     //增强健壮性，考虑到无参数情况
    {
        printf("请添加文件名，例如：./notebook <要保存的文件名> \n");
        return 1;
    }

     char *x_filename=argv[1];
     FILE *file=fopen(x_filename,"w");
     char buf_input[MAX_IN]={0};       //输入缓冲区

     printf("====Linux记事本====\n");
     printf("自动保存,输入 :q 退出程序\n");
     printf("保存的文件是:%s\n",x_filename);
     printf("===================\n");

     while(1){
        fgets(buf_input,MAX_IN,stdin);
        if(strncmp(buf_input,":q",2)==0){
         break;
        }
        fputs(buf_input,file);
     }
     fclose(file);
     printf("文件保存在%s,正在退出\n",x_filename);

     return 0;
}