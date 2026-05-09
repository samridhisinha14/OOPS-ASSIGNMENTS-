#include<iostream>
using namespace std;

//QUES1
// class Rectangle{
//     public:
//     int length;
//     int breadth;
//     Rectangle(int length=0,int breadth=0){
//         this->length = length;
//         this->breadth = breadth;

//     }
//     int area(){
//         return length*breadth;
//     }

// };
// class Cuboid : public Rectangle{
//     public:
//     int height;
//     Cuboid(int length=0,int breadth=0,int height = 0 ){
//         this->length = length;
//         this ->breadth = breadth;
//         this->height = height;
//     }
//     int Volume(){
//         return area()*height;
//     }


// };
// int main(){
//     class Rectangle obj1(10,20);
//     class Cuboid obj2(10,20,2);
//     cout<<"Area of rectangle is : "<<obj1.area()<<endl;
//     cout<<"Volume of Cuboid is : "<<obj2.Volume()<<endl;
//     return 0;
// }



// //Ques 2
// class Rectangle{
//     private :
//     int length;
//     int breadth;
//     protected :
//     void setlength(int length){
//         this->length= length;
//     }
//     void setbreath(int breadth){
//         this->breadth= breadth;
//     }
//     int  getlength(){
//         return length;
//     }
//     int  getbreadth(){
//         return breadth;
//     }
//     int getArea(){
//         return length*breadth;
//     }


// };
// class Cuboid : public Rectangle{
//     private:
//     int height;
//     public:

//     void setheight(int height){
//         this->height= height;
//     }
//     int getheight(){
//         return height;
//     }
//     Cuboid(int length=0,int breadth=0,int height=0){
//         setlength(length);
//         setbreath(breadth);
//         setheight(height);
//     }
//     int area(){
//         return 2*(getlength()*getbreadth()+getlength()*height+getbreadth()*height);
//     }
// };
// int main(){
//     class Cuboid obj1(20,30,40);
//     cout<<"Area of cuboid is : "<<obj1.area()<<endl;

//     return 0;
// }




////ques 3
// class base{
//     private :
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void fun(){
//         a = 10;
//         b = 120;
//         c = 30;
//     }


// };
// class derived:public base{
//     public:
//     int d;
//     void fun2(){
//         fun();
//         b = 30;
//         c = 40;
//         //a = 40; gives an error as it can't access private.
// }



// };

// int main(){
//     derived obj1;
//     obj1.fun();
//     obj1.fun2();
//     // cout<<obj.b; // gives an error because it can access protected


//     return 0;
// }




// //ques 4
// //4a) : single inheritance 
// class base{
//     private :
//     int x;
//     public:
//     void setx(int x){
//         this->x = x;
//     }
//     int getx(){
//         return x;
//     }
//     base(){
//         cout<<"Default cons is called."<<endl;
//     }
//     base(int x){
//         this->x = x;
//     }

// };

// class derived:public base{
//     private : 
//     int y;
//     public:
//     void sety(int y){
//         this->y = y;
//     }
//     int gety(){
//         return y;
//     } 
//     void print(){
//         cout<<"Values of x and y are : "<<getx()<<" "<<y;
//     }
// };
// int main(){
//     class derived obj2;
//     obj2.setx(10);
//     obj2.sety(30);
//     obj2.print();
//     return 0;
// }





////ques 4b

// class camera{
//     public:
//     int megapixel;
//     int resolution;
// };
// class phone{
//     public:
//     int memory;
//     int length;
//     int width;

// };
// class iphone : public camera,public phone{
//     public:
//     void features(){
//         memory = 64;
//         length = 6;
//         width = 3;
//         megapixel = 48;

//     }
// };


////ques 4c
// class shape{
//     public:
//     int sides;
//     int angle;
// };
// class rectangle:virtual public shape{
//     public:
//     void set(int angle){
//         sides = 4;
//         if(angle==90)this->angle = angle;
        
//     }
// };
// class triangle : virtual public shape{
//     public:
//     void set(int angle){
//         sides = 3;
//         if(angle==60)this->angle = angle;
        
//     }
// };


////ques 4d
// class point{
//     public:
//     int x;
//     int y;
// };
// class circle:public point{
//     public:
//     int radius;
//     int getarea(){
//         return M_PI*radius*radius;

//     }
// };
// class cylinder : public circle{
//     public:
//     int height;
//     int getvolume(){
//         return getarea()*height;
//     }
// };

////ques 4e
// class shape{
//     public:
//     int sides;
//     int angle;
// };
// class rectangle:virtual public shape{
//     public:
//     void set(int angle){
//         sides = 4;
//         if(angle==90)this->angle = angle;
        
//     }
// };
// class triangle : virtual public shape{
//     public:
//     void set(int angle){
//         sides = 3;
//         if(angle==60)this->angle = angle;
        
//     }
// };

// class pyramid : public rectangle,public triangle{
//     public:
//     int height;

// };







////ques 5
// class base{
//     private :
//     int x;
//     public:
//     void setx(int x){
//         this->x = x;
//     }
//     int getx(){
//         return x;
//     }
//     base(){
//         cout<<"Default cons of base class is called."<<endl;
//     }
//     base(int x){
//         this->x = x;
//         cout<<"Parameterised constructor of base class is called."<<endl;
//     }

// };

// class derived : public base{
//     private : 
//     int y;
//     public:
//     derived(){
//         cout<<"Default cons of derived class is called."<<endl;
//     }
//     derived(int y){
//         this->y = y;
//         cout<<"Parameterised constructor of derived class is called."<<endl;
//     }


//     //vv imp how to call parametrized base from  derived
//     derived(int x,int y):base(y){
//         cout<<"Parameterised constructor of derived class is called."<<endl;
//     }


// };
// int main(){
//     class derived obj2;
//     derived obj1(30);
//     derived obj3(20,30);


//     return 0;
// }




//ques 6
// class Book {
// protected:
//     string title, author;
//     float price;
// public:
//     Book(string t, string a, float p) : title(t), author(a), price(p) {}
//     void display() { 
//         cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl; 
//     }
// };
// class Textbook : public Book {
// private:
//     string subject;
// public:
//     Textbook(string t, string a, float p, string s) : Book(t, a, p), subject(s) {}
//     void display() { Book::display(); cout << "Subject: " << subject << endl; }
// };
// void q6() {
//     Book b("Novel", "Author A", 299); b.display();
//     Textbook tb("C++ Programming", "Stroustrup", 599, "Computer Science"); tb.display();
// }



//ques 7
// class Speedometer { 
//     protected: 
//     int speed = 80; 
//     public: 
//     void showSpeed(){
//          cout << "Speed: " << speed << " km/h" << endl; }
         
//     };
// class FuelGauge   { 
//     protected: 
//     int fuel  = 60; 
//     public: 
//     void showFuel(){ 
//         cout << "Fuel: "  << fuel  << "%" << endl; 
//     } 
// };
// class Thermometer{ 
//     protected: 
//     int temp  = 90; 
//     public: 
//     void showTemp(){ 
//         cout << "Temp: "  << temp  << "°C" << endl; 
//     } 
// };
// class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
// public:
//     void display() { 
//         showSpeed(); 
//         showFuel(); 
//         showTemp(); 
//     }
// };
// void q7() { 
//     CarDashboard dash; dash.display(); 
// }


// class LibraryUser {
// protected:
//     string name, id, contact;
// public:
//     LibraryUser(string n, string i, string c) : name(n), id(i), contact(c) {}
//     void display() { cout << "Name: " << name << ", ID: " << id << ", Contact: " << contact << endl; }
// };
// class Student8 : public LibraryUser {
//     string gradeLevel;
// public:
//     Student8(string n, string i, string c, string g) : LibraryUser(n,i,c), gradeLevel(g) {}
//     void display() { LibraryUser::display(); cout << "Grade: " << gradeLevel << endl; }
// };
// class Teacher : public LibraryUser {
//     string department;
// public:
//     Teacher(string n, string i, string c, string d) : LibraryUser(n,i,c), department(d) {}
//     void display() { LibraryUser::display(); cout << "Dept: " << department << endl; }
// };
// void q8() {
//     Student8 s("Pranav", "S001", "9999", "3rd Year"); s.display();
//     Teacher t("Dr. Sharma", "T001", "8888", "CSE"); t.display();
// }

// // Q9: Vehicle -> Truck -> RefrigeratedTruck (Multilevel)
// class Vehicle9 {
// protected: string make, model; int year;
// public:
//     Vehicle9(string mk, string mo, int y) : make(mk), model(mo), year(y) {}
//     void display() { cout << make << " " << model << " (" << year << ")" << endl; }
// };
// class Truck : public Vehicle9 {
// protected: float load_capacity;
// public:
//     Truck(string mk, string mo, int y, float lc) : Vehicle9(mk,mo,y), load_capacity(lc) {}
//     void display() { Vehicle9::display(); cout << "Load: " << load_capacity << " tons" << endl; }
// };
// class RefrigeratedTruck : public Truck {
//     float temperature_control;
// public:
//     RefrigeratedTruck(string mk, string mo, int y, float lc, float tc)
//         : Truck(mk,mo,y,lc), temperature_control(tc) {}
//     void display() { Truck::display(); cout << "Temp Control: " << temperature_control << "°C" << endl; }
// };
// void q9() { RefrigeratedTruck rt("Volvo","FH16",2022,20,-18); rt.display(); }

// // Q10: Hybrid Inheritance - Teaching Assistant
// class Person10 {
// protected: string name, address;
// public:
//     Person10(string n="", string a="") : name(n), address(a) {}
//     void display() { cout << "Name: " << name << ", Address: " << address << endl; }
// };
// class Staff : virtual public Person10 {
// protected: string emp_id, dept;
// public:
//     Staff(string n="", string a="", string e="", string d="") : Person10(n,a), emp_id(e), dept(d) {}
//     void display() { Person10::display(); cout << "EmpID: " << emp_id << ", Dept: " << dept << endl; }
// };
// class Student10 : virtual public Person10 {
// protected: string stu_id, grade;
// public:
//     Student10(string n="", string a="", string s="", string g="") : Person10(n,a), stu_id(s), grade(g) {}
//     void display() { Person10::display(); cout << "StuID: " << stu_id << ", Grade: " << grade << endl; }
// };
// class TeachingAssistant : public Staff, public Student10 {
// public:
//     TeachingAssistant(string n, string a, string e, string d, string s, string g)
//         : Person10(n,a), Staff(n,a,e,d), Student10(n,a,s,g) {}
//     void display() {
//         Person10::display();
//         cout << "EmpID: " << emp_id << ", Dept: " << dept << endl;
//         cout << "StuID: " << stu_id << ", Grade: " << grade << endl;
//     }
// };
// void q10() { TeachingAssistant ta("Pranav","LPU","E101","CSE","S202","A"); ta.display(); }

// int main() {
//     cout << "=== Q1: Single Inheritance ===" << endl; q1();
//     cout << "\n=== Q2: Protected Access ===" << endl; q2();
//     cout << "\n=== Q3: Inheritance Modes ===" << endl; q3();
//     cout << "\n=== Q4: All Inheritance Types ===" << endl; q4();
//     cout << "\n=== Q5: Constructor/Destructor in Inheritance ===" << endl; q5();
//     cout << "\n=== Q6: Book -> Textbook ===" << endl; q6();
//     cout << "\n=== Q7: Car Dashboard ===" << endl; q7();
//     cout << "\n=== Q8: Library User System ===" << endl; q8();
//     cout << "\n=== Q9: Multilevel (Vehicle) ===" << endl; q9();
//     cout << "\n=== Q10: Hybrid - Teaching Assistant ===" << endl; q10();
//     return 0;
// }



