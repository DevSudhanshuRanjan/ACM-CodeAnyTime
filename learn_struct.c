#include <stdio.h>
struct student
{
    char *name;
    long sapId;
    int age;
};


int main(){

    struct student a;
    a.name = "Sudhanshu";
    a.age = 20;
    a.sapId = 590018435;
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    printf("%d\n",a.sapId);

    return 0;
}