#include <iostream>
using namespace std;
struct student
{
    int id;
    char name[50];
};

int main()
{
    struct student s;
    s.id = 5;
    while(s.id){
        cout<<"Hi";
    }
    return 0;
}