#include <stdio.h>
int addTen(int x)//ประกาศว่ามี fun นี่อยู่และมีการส่งค่ากลับเพราะเป็น int
{
    x = x+10;
    return x; // ส่งค่าของตัวแปร x คืนที่ที่เรียกใช้มัน
}
void addTwenty(int x); // ประกาศ fun นี่อยู่และไม่มีการส่งค่ากลับเพราะเป็น void
int main ()
{
    int x = 50;
    int y = addTen(x);
    printf("x in main = %d\n", x);
    printf("addTen in main = %d\n", y);
    addTwenty(x);
    return 0; 
}

void addTwenty(int x){
    x = x+20;
    printf("x in addTenty = %d\n", x);
}