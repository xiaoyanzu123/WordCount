#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[])
{ 
    FILE *a;
    int count = 0; // count�������� 
    if ((a=fopen(argv[2], "r")) == NULL)
    {
        puts("�д�!�����½���\n");
        return 0;   }
        
    if (argv[1][1] == 'w') // ������¼���� 
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
        printf("������=%d\n", count); }

    else if (argv[1][1] == 'c') // ����ͳ���ַ�
    {
        char j;
        while ((j = fgetc(a)) !=EOF) count ++;
        printf("�ַ���=%d", count); }
    fclose(a);
    return 0;
}


