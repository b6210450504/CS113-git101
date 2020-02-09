#include<stdio.h>
void ChangeToTen(int *b);
void main()
{
    // *.. คือส่งค่าใน address นั้นๆ [ถ้า *มั้่วๆ จะได้ค่าของตำแหน่งอะไรมาก็ไม่รู้]     &.. คือส่งค่าของ adress นั้นๆ
    char item[30] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *a1=item, *a2; 
    int b=10;
    printf("%s\n",a1);
    a2 =&a1[10]; // a2 ถูกเก็บค่าตั้งแต่ a1 ลำดับที่ 10 เป็นต้นไป
    printf("%s\n",a2);
    a2 =&a1[20]; // a2 ถูกเก็บค่าตั้งแต่ a1 ลำดับที่ 20 เป็นต้นไป
    printf("%s\n",a2);
    printf("%d",b);
    ChangeToTen(&b);
    printf(" + 10 : %d",b);
}
void ChangeToTen(int *b){
    *b=*b+10;
}