#include<iostream>
#include<string>
using namespace std;


// //ques 1
// class rectangle{
//     private:
//     int length;
//     int breadth;
//     public:
//     rectangle(){
//         length = 0;
//         breadth = 0;

//     }
//     rectangle(int length,int breadth){
//         this->length = length;
//         this->breadth = breadth;

//     }
//     rectangle(int value){
//         length = breadth = value;
//     }

//     int area(){
//         return length*breadth;
//     }
// };
// int main(){

//     rectangle r1,r2(21,41),r3(12);
//     cout<<r1.area()<<endl;
//     cout<<r2.area()<<endl;
//     cout<<r3.area()<<endl;

//     return 0;
// }



////ques 2
// class rectangle{
//     private:
//     int length;
//     int breadth;
//     public:
    
//     rectangle(int length=0,int breadth=0){
//         this->length = length;
//         this->breadth = breadth;
//         cout<<"Constructor 1 is called ."<<endl;

//     }
//     rectangle(double value){
//         length = breadth = (int)value;
//         cout<<"Constructor 2 is called ."<<endl;
//     }

//     int area(){
//         return length*breadth;
//     }
// };
// int main(){
//     rectangle arr[4]={
//     rectangle (),
//     rectangle (12,13),
//     rectangle (12.0),
//     rectangle(3,9)
// };

// for(int i=0;i<4;i++){
//     cout<<"area of "<<i+1<<" rectangle is "<<arr[i].area()<<endl;
// }

//     return 0;
// }



////ques 3
// class Dest{
//     public:
//     int a=10;
//     Dest(){
//         cout<<"Constructor was called."<<endl;
//         cout<<"The value of variable a is : "<<a++<<endl;

//     }
    
//     ~Dest(){
//         cout<<"Destructor was called."<<endl;
//         cout<<"The value of variable a is : "<<a<<endl;
        
//     }
// };

// void fun(){
//     Dest obj1;
    
// }

// int main(){
//     fun();
//     return 0;
// }



//ques 4 dynamic memory allocation



// class Student {
//     private:
//         string name;
//         int age;
//     public:
//         Student(string name = "", int age = 0) {
//             this->name = name;
//             this->age  = age;
//         }
//         void display() {
//             cout << "Name: " << name << " | Age: " << age << endl;
//         }
//         ~Student() {
//             cout << "Student " << name << " removed from memory.\n";
//         }
// };

// void demonstrate() {

//     // 1. Integer variable
//     cout << "\n--- Integer Variable ---\n";
//     int *score = new int;
//     *score = 95;
//     cout << "Top score: " << *score << endl;
//     delete score;

//     // 2. Float variable
//     cout << "\n--- Float Variable ---\n";
//     float *gpa = new float;
//     *gpa = 9.8f;
//     cout << "GPA: " << *gpa << endl;
//     delete gpa;

//     // 3. Integer array
//     cout << "\n--- Integer Array (marks) ---\n";
//     int *marks = new int[5];
//     for (int i = 0; i < 5; i++) {
//         marks[i] = (i + 1) * 10;   // 10, 20, 30, 40, 50
//         cout << "Subject " << i+1 << " marks: " << marks[i] << endl;
//     }
//     delete[] marks;

//     // 4. Float array
//     cout << "\n--- Float Array (percentages) ---\n";
//     float *percent = new float[5];
//     for (int i = 0; i < 5; i++) {
//         percent[i] = (i + 1) * 10.5f;
//         cout << "Percentage " << i+1 << ": " << percent[i] << "%" << endl;
//     }
//     delete[] percent;

//     // 5. Single class object
//     cout << "\n--- Single Class Object ---\n";
//     Student *s = new Student("Alice", 20);
//     s->display();
//     delete s;

//     // 6. Array of objects
//     cout << "\n--- Array of Objects ---\n";
//     Student *students = new Student[3]{
//         Student("Bob",   19),
//         Student("Carol", 21),
//         Student("Dave",  22)
//     };
//     for (int i = 0; i < 3; i++) {
//         students[i].display();
//     }
//     delete[] students;
// }

// int main() {
//     demonstrate();
//     return 0;
// }