#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[10];
    int b,i=0;
    gets(a);
    b=atoi(a);
    while (i<b)
    // while คือ loop การทำงานแบบวนรอบไปเรื่อยๆจนกว่า condition จะเป็นเท็จ หรือ มีคำสั่ง break
    {
        if (i==b-1)
            break;
        printf("while [%d]\n",i);
            //\n คือ ขึ้นบรรทัดใหม่
        i++;
            //i++ คือ i=i+1 หรือ i+=1
    }
    printf("-----\n");
    for (int i = 0; i < b; i++)
    {
        printf("for [%d]\n",i);
    }
    
    // for คือ loop การทำงานแบบวนรอบไปเรื่อยๆจนกว่า condition จะเป็นเท็จ หรือ มีคำสั่ง break การทำงานเหมือน while
    return 0;
}