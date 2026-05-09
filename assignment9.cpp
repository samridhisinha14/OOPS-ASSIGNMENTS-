////ASSIGNMENT NUMBER 9
// Samridhi Sinha
// 1024150345
// 2O33
// OOPS




#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//ques 4
// void read(){
//     fstream fobj;
//     int count = 0;
//     fobj.open("NOTES.txt",ios::in);
//     char ch;
//     if(!fobj){
//     cout << "File not found or cannot be opened";
//     return;
//     }
//     string s;
//     while(getline(fobj,s)){
//         if(ch>'A'&&ch<='Z'||ch>='a'||ch<='z'){
//             count++;
//             cout<<ch<<" ";
//         }
//     }
//     cout << "\nTotal alphabets = " << count;
//     fobj.close();

    
    
// }
// int main(){


//     //QUESTION 1
//     // fstream fobj;
//     // fobj.open("NUM.txt",ios::out);
//     // for(int i=0;i<201;i++){
//     //     fobj<<i<<" ";
//     // }

//         return 0;
// }

// QUESTION 2

//     void read(fstream &fobj1){
//     char ch;
//     int count=0;
//     while(fobj1.get(ch)){
//         if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
//             count++;
//         }
//     }
//     cout<<"No of alphabets in the file = "<<count;
// }

// int main(){
//     fstream fobj;
//     fobj.open("NOTES.TXT",ios::out);
//     fobj<<"Hello Samridhi Sinha ";
//     fobj.close();

//     fstream fobj1;
//     fobj1.open("NOTES.TXT",ios::in);

//     read(fobj1);
//     return 0;
// }


//Ques 3
// int main(){
//     fstream fobj;
//     fobj.open("NUM.TXT",ios::in);

//     fstream fobj1;
//     fobj1.open("NUM1.TXT",ios::out);

//     char ch;
//     while(fobj.get(ch)){
//         fobj1.put(ch);
//     }

//     fobj.close();
//     fobj1.close();
// }


//ques 5

// int main(){

//     fstream fobj1;
//     fobj1.open("file.TXT",ios::out);
//     for(char ch='A';ch<='Z';ch++){
//         fobj1<<ch;
//     }
//     fobj1.close();
    
//     fstream fobj;
//     fobj.open("file.TXT",ios::in|ios::out);
//     fobj.seekg(9);
//     char ch;
//     fobj.get(ch);
//     cout<<"10th character = "<<ch<<endl;
//     fobj.seekp(4);
//     fobj.put('X');
//     fobj.seekg(0,ios::end);
//     cout<<"File size= "<<fobj.tellg()<<endl;
//     fobj.seekg(-1,ios::end);
//     fobj.get(ch);
//     cout<<"Last character: "<<ch<<endl;
//     fobj.close();
//     fstream fobj2;
//     fobj2.open("DATA.TXT",ios::out);
//     fobj2<<"HI I AM SAMRIDHI "<<endl;
//     fobj2<<"My roll no is 1024150345";
//     fobj2.close();

//     fstream fobj3;
//     fobj3.open("DATA.TXT",ios::in);
//     fobj3.seekg(9);
//     cout<<"Current position = "<<fobj3.tellg()<<endl;;
//     cout<<"Remaining content: ";
//     char ch2;
//     while(fobj3.get(ch2)){
//         cout<<ch2;
//     }
//     fobj3.close();

// }



//ques 6 
int main(){
    fstream fobj;
    fobj.open("Q6.TXT",ios::out);
    
    string s="Hello World";
    for(int i=0;s[i]!='\0';i++){
        fobj<<s[i];
        cout<<"current positon = "<<fobj.tellp()<<endl;
    }
    fobj.close();

    fstream fobj1;
    fobj1.open("Q6.TXT",ios::in|ios::out);
    fobj1.seekp(6);
    fobj1<<"C++";
    fobj1.close();
}
    
