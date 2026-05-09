#include<iostream>
using namespace std;

//QUES 1
// struct Student{
//     string Name;
//     int Roll_no;
//     string Degree;
//     char Hostel;
//     float cgpa;
//     void addDetails(){
//         cout<<"Enter a name : "<<endl;
//         cin>>Name;
//         cout<<"Enter roll number : "<<endl;
//         cin>>Roll_no;
//         cout<<"Enter Degree : "<<endl;
//         cin>>Degree;
//         cout<<"Enter Hostel : "<<endl;
//         cin>>Hostel;
//         cout<<"Enter cgpa: "<<endl;
//         cin>>cgpa;        
//     }
//     void updateDetails(){
//         cout<<"Enter updated name : "<<endl;
//         cin>>Name;
//         cout<<"Enter updated Roll Number : "<<endl;
//         cin>>Roll_no;
//         cout<<"Enter updated Degree : "<<endl;
//         cin>>Degree;
//     }
//     void updateCGPA(){
//         cout<<"Update cgpa : "<<endl;
//         cin>>cgpa;

//     }
//     void updateHostel(){
//         cout<<"Update Hostel : "<<endl;
//         cin>>Hostel;        
//     }
//     void displaydetails(){
//         cout<<"Name\t"<<Name<<endl;
//         cout<<"Degree\t"<<Degree<<endl;
//         cout<<"Roll Number\t"<<Roll_no<<endl;
//         cout<<"Hostel\t"<<Hostel<<endl;
//         cout<<"Cgpa\t"<<cgpa<<endl;

//     }
// };
// int main(){
//     struct Student obj1;
//     obj1.addDetails();
//     obj1.displaydetails();



//     return 0;
// }


//QUES 2
// class Student{
//     private:
//     string Name;
//     int Roll_no;
//     string Degree;
//     char Hostel;
//     float cgpa;
//     public:
//     void addDetails(){
//         cout<<"Enter a name : "<<endl;
//         cin>>Name;
//         cout<<"Enter roll number : "<<endl;
//         cin>>Roll_no;
//         cout<<"Enter Degree : "<<endl;
//         cin>>Degree;
//         cout<<"Enter Hostel : "<<endl;
//         cin>>Hostel;
//         cout<<"Enter cgpa: "<<endl;
//         cin>>cgpa;        
//     }
//     void updateDetails(){
//         cout<<"Enter updated name : "<<endl;
//         cin>>Name;
//         cout<<"Enter updated Roll Number : "<<endl;
//         cin>>Roll_no;
//         cout<<"Enter updated Degree : "<<endl;
//         cin>>Degree;
//     }
//     void updateCGPA(){
//         cout<<"Update cgpa : "<<endl;
//         cin>>cgpa;

//     }
//     void updateHostel(){
//         cout<<"Update Hostel : "<<endl;
//         cin>>Hostel;        
//     }
//     void displaydetails(){
//         cout<<"Name\t"<<Name<<endl;
//         cout<<"Degree\t"<<Degree<<endl;
//         cout<<"Roll Number\t"<<Roll_no<<endl;
//         cout<<"Hostel\t"<<Hostel<<endl;
//         cout<<"Cgpa\t"<<cgpa<<endl;

//     }
// };

// int main(){

//     class Student obj1;
//     obj1.addDetails();
//     obj1.displaydetails();
//     return 0;
// }


//Ques 4
// class Rectangle{
//     private: 
//     int height;
//     int width;
//     public:
//     int setData(int height,int width){
//         if(height<0||width<0){
//             cout<<"Invalid Data";
//             return 0;
//         }
//         this->height = height;
//         this->width = width;

//     }

//     int getData(){
//         if(height<0||width<0){
//             cout<<"Invalid Data";
//             return 0;
//         }
//         cout<<"Height of rectangle is : "<<height<<endl;
//         cout<<"Width of rectangle is : "<<width<<endl;

//     }
//     int CalculateArea(){
//         if(height<0||width<0){
//             cout<<"Invalid Data";
//             return 0;
//         }    
//         return height*width;
//     }
//     void DisplayArea(){
//         cout<<"Area is :"<<CalculateArea()<<endl;
//     }

// };
// int main(){
//     class Rectangle obj1;
//     obj1.setData(15,20);
//     obj1.getData();
//     obj1.CalculateArea();
//     obj1.DisplayArea();

//     return 0;
// }


//Ques 5
// class Complex{
//     private:
//     float real;
//     float imaginary;
//     public:
//     void setComplex(){
//         cout<<"Enter real part : ";
//         cin>>real;
//         cout<<"Enter imaginary part : ";
//         cin>>imaginary;
//     }
//     void DisplayComplex(){
//         cout<<real<<"+ "<<imaginary<<"i"<<endl;

//     }

//     void Sum(Complex c1,Complex c2){
//         float sum_real = c1.real + c2.real;
//         float sum_img = c1.imaginary + c2.imaginary;
//         cout<<"Sum of 2 complex numbers is : "<<sum_real<<" + "<<sum_img<<"i"<<endl;
//     }

// };
// int main(){
//     class Complex c1;
//     c1.setComplex();
//     c1.DisplayComplex();
//     Complex c2;
//     c2.setComplex();
//     c1.Sum(c1,c2);

//     return 0;
// }





// QUES 6a
// class Complex{
//     private:
//     int real;
//     int img;
//     public:
//     Complex(int real=0,int img=0){
//         this->real = real;
//         this->img = img;
//     }

//     void swap(Complex *c1,Complex *c2);
//     void display(Complex c1);

// };

// void Complex ::swap(Complex *c1,Complex *c2){
//     Complex temp;
//     temp.real = c1->real;
//     c1->real= c2->real;
//     c2->real = temp.real;

//     temp.img = c1->img;
//     c1->img= c2->img;
//     c2->img = temp.img;
// }
// void Complex :: display(Complex c1){
//     cout<<c1.real<<" + "<<c1.img<<"i"<<endl;
// }

// int main(){
//     class Complex c1(2,-3),c2(-4,-8);
//     c1.swap(&c1,&c2);
//     c1.display(c1);
//     c2.display(c2);
//     return 0;

// }


//ques 6b,c,d
int g = 15;

void Samridhi(){
    static int s = 12;
    std::cout<<"static varibale s = "<<s<<endl;
    s++;
    int g = 0;
    std::cout<<"local varibale g = "<<g<<endl;
    std::cout<<"global variable g = "<<::g<<endl;
    g++;
    ::g++;
    std::cout<<"local varibale g = "<<g<<endl;
    std::cout<<"global variable g = "<<::g<<endl;


}

int main(){
    Samridhi();
    Samridhi();
    return 0;
}








