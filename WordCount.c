#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[])
{ 
    FILE *a;
    int count = 0; // count用来计数 
    if ((a=fopen(argv[2], "r")) == NULL)
    {
        puts("有错!请重新进行\n");
        return 0;   }
        
    if (argv[1][1] == 'w') // 用来记录单词 
    {
        char x[921];
        int l;
        while (fscanf(a, "%s", x) != EOF)
        {
        	
            count ++;
            for (l = 1; l < strlen(x) - 1; l ++)
                if (x[l] == ',' && x[l-1] != ',' && x[l+1] != ',') 
                    count ++;
        }
        printf("单词数=%d\n", count); }

    else if (argv[1][1] == 'c') // 用来统计字符
    {
        char j;
        while ((j = fgetc(a)) !=EOF) count ++;
        printf("字符数=%d", count); }
    fclose(a);
    return 0;
}


