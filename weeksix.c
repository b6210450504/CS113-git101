#include <stdio.h>
#include <string.h>
int main() {
    int a[100][100],x,b; //a[100][100] คือ array ช่องที n มี array n ช่อง ในที่นี้คือ array[0-99][] มี 100 ช่อง  [][0-99] คือจำนวนทั้งหมด 100 ช่อง
    scanf("%d",&x); //scanf คือ function  รับค่า ในที่นี้คือ รับค่า input เข้ามา แล้วส่งค่าให้กับตัวแปร x
    for (int i = 0; 3-i; i++)
    {
        scanf("%d",&x);
        for (int j = 0; x>0; j++)
        {
            a[i][j]=x; //ให้ x เก็บค่าใน a[i][j]
            scanf("%d",&x);
        }
    }
    int i=0,j=0;
    for (i = 0; 3-i; i++)
    {
        for (j = 0; a[i][j]!='\0'; j++)
        {
            printf("a[%d][%d] : %d\n",i,j,a[i][j]);
        }
        
    }
    return 0;
}