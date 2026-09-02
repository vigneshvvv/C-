#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private:
        char* name;

    public:
        Student(const char* studenName){
            name = new char[strlen(studenName) +1];
            strcpy(name, studenName);
        }

        Student(const Student& other){
            name = new char[strlen(other.name) +1];
            strcpy(name, other.name);
        }

        ~Student(){
            delete[] name;
        }

        void display(){
            cout << "Name: " << name << endl;
        }
};

int main(){
    Student s1("Vignesh");
    Student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}
