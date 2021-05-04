#include <stdio.h>
#include <cs50.h>
typedef struct user{
    string username;
    float salary;
    int age;
}usr;


int main(void)
{
    usr user;
    user.username = "Mohamadalsalty";
    user.salary = 0.0;
    user.age = 19;
    
    printf("username: %s\nsalary: %f\nage: %d\n", user.username, user.salary, user.age);
}