#include<iostream>
using namespace std;


// // ques 1
// // a)pointer to an object and this pointer


// class account{
//     public:
//     int account_no;
//     int balance;
//     int deposit;

//     account(int account_no=0,int balance=0,int deposit=0){
//         this->deposit = deposit; //this pointer to prevent name confusion
//         this->balance = balance + deposit; 
//         this->account_no= account_no;
//     }
//     int get_Deposit(){
//         return deposit;
//     }
//     int get_balance(){
//         return balance;
//     }    


// };
// int main(){
//     class account a1(345,10000,800),a2(346,12000,7000);
//     cout<<"Original balance of a1 is :"<<a1.get_balance()<<endl;
//     account *ptr = &a1;
//     ptr->balance = 2000;
//     cout<<"Changed balance of a1 is :"<<ptr->get_balance()<<endl;
//     return 0;
// }




// //ques 2
// class demo{
//     int x;
//     public:

//     demo(int x=0){
//         this->x = x;
//     }

//     int getdemo(){
//         return x;

//     }
//     friend void swap(demo &a,demo &b);

// };
//     void swap(demo &a,demo &b){
//         demo temp;
//         temp.x = a.x;
//         a.x = b.x;
//         b.x = temp.x;
//     }

// int main(){
//     demo a(20),b(40);
//     cout<<"values before swap : a = "<<a.getdemo()<<" b = "<<b.getdemo()<<endl;
//     swap(a,b);
//     cout<<"values after swap : a = "<<a.getdemo()<<" b = "<<b.getdemo();


// }


//ques 3
//Addition of 2 complex numbers using friend function
// class Complex{
//     private:
//     int real;
//     int imaginary;
//     public:
//     Complex(int real=0,int imaginary=0){
//         this-> real = real;
//         this->imaginary= imaginary;

//     }

//     int getreal(){
//         return real;
//     }
//     int getimg(){
//         return imaginary;
//     }
//     friend Complex operator +(Complex x,Complex y);

// };
// Complex operator+(Complex x,Complex y){
//     Complex temp;
//     temp.real = x.real+y.real;
//     temp.imaginary = x.imaginary+y.imaginary;
//     return temp;
// }
// int main(){

//     class Complex C1(34,10),C2(4,11),C3;
//     C3=C1+C2;
//     cout<<"The sum of two complex numbers is : "<<C3.getreal()<<"+"<<C3.getimg()<<"i"<<endl;
    


//     return 0;
// }



// //ques 5
//friends class
// class fun2;
// class fun{
//     private:
//     int a=10;
    
//     friend fun2;

// };
// class fun2{
//     public :
//     class fun obj1;
//     void print(){
//     cout<<obj1.a;
//     }


// };

// int main(){
//     class fun2 obj2;
//     obj2.print();
//     return 0;
// }



//ques 6

// inline int cube(int length){
//     return length*length*length;
// }

// int main(){
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     cout<<"Cube of a number : "<<cube(n);
//     return 0;
// }



//ques 7
// using pass by value and pass by address in swap


// class Magic{

//     int a;
//     public:
//     void SetA(int a){
//         this->a = a;

//     }
//     int GetA(){
//         return a;
//     }

//     void Swapbyvalue(Magic obj1,Magic obj2);
//     void Swapbyref(Magic *obj1,Magic *obj2);

// };

// void Magic ::Swapbyvalue(Magic obj1,Magic obj2){
//     Magic temp;
//     temp.a = obj1.a;
//     obj1.a = obj2.a;
//     obj2.a = temp.a;

// }

// void Magic :: Swapbyref(Magic *obj1,Magic *obj2){
//     int temp = obj1->a;
//     obj1->a = obj2->a;
//     obj2->a = temp;
// }



// int main(){
//     class Magic obj1,obj2;
//     obj1.SetA(20);
//     obj2.SetA(40);
//     obj1.Swapbyvalue(obj1,obj2);
//     cout<<"Values after Swapping using Swap by value object 1 = "<<obj1.GetA()<<" object 2 = "<<obj2.GetA()<<endl;
//     obj1.Swapbyref(&obj1,&obj2);
//     cout<<"Values after Swapping using Swap by reference object 1 = "<<obj1.GetA()<<" object 2 = "<<obj2.GetA();

//     return 0;
// }