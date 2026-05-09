#include<iostream>
#include<string>
using namespace std;

// class Book{
//     public:
//     string title;
//     string author;
//     string ISBN;
//     public:
//     Book(string title=" ",string author=" ",string ISBN=" "){
//         this->author = author;
//         this->ISBN= ISBN;
//         this->title = title;
//     }

// };
// class Library{
//     private:
//     int count =0;
//     public:
//     Book books[100];
//     bool addnewbook(string title,string author,string ISBN){
//         if(count>=100)return false;
//         else{
//             books[count++]=Book(title,author,ISBN);
//         }
//         return true;

//     }
//     bool removeBooks(string ISBN){
//         for(int i =0;i<count;i++){
//             if(books[i].ISBN==ISBN){
//                 count--;
//                 for(int j=i;j<count;j++){
//                     books[j]=books[j+1];
//                 }
//             }
//         }
//     }
//     void displayDetails(){
//         for(int i=0;i<count;i++){
//             cout<<"Book "<<i<<" = "<<books[i].title<<" "<<books[i].author<<" "<<books[i].ISBN<<" "<<endl;
//         }

//     }


// };
// int main(){

//     Library obj1;
//     obj1.addnewbook("Silent_Patient","xyz","11.5-F");
//     obj1.addnewbook("Quet_Patient","xyz2","11.5-F_78");
//     obj1.addnewbook("Loud_Patient","XYz","11.5-F-99");
//     obj1.displayDetails();
//     obj1.removeBooks("11.5-F_78");
//     obj1.displayDetails();

//     return 0;
// }






//QUES 3
// class Account {
// private:
//     const long accountNumber;
//     long transactionID;
//     string transactionType;
//     double balance;
// public:
//     Account(long accNo, double initialBalance) :
//         accountNumber(accNo), balance(initialBalance), transactionID(1000) {}

//     long depositAmount(const long to, const long from, const double amount) {
//         if (accountNumber == to) {
//             balance += amount;
//             transactionType = "Credited";
//         }
//         transactionID++;
//         cout << "Deposit TxnID: " << transactionID << endl;
//         return transactionID;
//     }
//     long creditAmount(const long to, const long from, const double amount) {
//         if (accountNumber == from) {
//             balance -= amount;
//             transactionType = "Debited";
//         }
//         transactionID++;
//         cout << "Debit TxnID: " << transactionID << endl;
//         return transactionID;
//     }
//     void displayDetails() const {
//         cout << "Account: " << accountNumber
//              << " | Balance: " << balance
//              << " | Last Txn: " << transactionType << endl;
//     }
// };

// void q3() {
//     Account accounts[5] = {
//         Account(1001, 5000), Account(1002, 3000),
//         Account(1003, 7000), Account(1004, 2000), Account(1005, 9000)
//     };
//     accounts[0].depositAmount(1001, 1002, 500);
//     accounts[1].creditAmount(1001, 1002, 500);
//     accounts[2].depositAmount(1003, 1004, 1500);
//     cout << "\nAccount Details:" << endl;
//     for (int i = 0; i < 5; i++) accounts[i].displayDetails();
// }


//ques 4 ADD 2 DATA MEMBERS IOF 2 FUNCTIONS
class Add{
    int a;
    Add(int a){
        this->a = a;
    }
    
}





 
//QUES 5 Addition of 2 complex numbers using friend function
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