#include <iostream>
using namespace std;
class student{
private:
  long id;
  string name;
  int age;

public:
  //student();
 void set_name(string);
void set_age(int);
string get_name();
int get_age();
void print_name();

};

//void student::set_name(string);

void student::set_name(string n){
   name =n;
}
void student::set_age(int a){
  age = a;
}
int student::get_age(){
  return age;
}
void student::print_name(){
  cout<<name;
}