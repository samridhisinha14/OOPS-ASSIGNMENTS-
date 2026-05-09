////ASSIGNMENT NUMBER 8
// Samridhi Sinha
// 1024150345
// 2O33
// OOPS

#include<iostream>
using namespace std;

//QUES 1

// template <class T>
// class fun{
//     private:
//     T x[5];
//     public:
//     void setx(T x[]);
//     void getx();

// };
// template <class T>
// void fun<T>::setx(T arr[]){
//     for(int i=0;i<5;i++){
//         x[i] = arr[i];
//     }
// }
// template <class T>
// void fun<T>::getx(){
//     for(int i=0;i<5;i++){
//         cout<<x[i]<<" ";

//     }
//     cout<<endl;
// }




// int main(){
//     int arr[5]={0,1,2,3,4};
//     fun <int> obj1;
//     obj1.setx(arr);
//     obj1.getx();
//     return 0;
// }


//QUES 2
// template<typename T>
// void min(T arr[],int n){
//     T mini=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     cout<<"Minimum element in the array is = "<<mini;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     int arr[n];
//     cout<<endl<<"Enter "<<n<<" elements ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<endl<<"Array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     min(arr,n);


// }



//QUES 3
// template<typename T>
// void bubblesort(T arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j+1]<arr[j]){
//                 T temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     cout<<endl<<"Sorted Array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     int arr[n];
//     cout<<endl<<"Enter "<<n<<" elements ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<endl<<"Array before sorting  is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     bubblesort(arr,n);
// }



//QUES 4
// template<typename T>
// void linear_search(T arr[],int n){
//     T key;
//     cout<<"Enter element to search: ";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout<<endl<<"Element found at index "<<i<<endl;
//             return;
//         }
//     }
//     cout<<endl<<"Element not present in the array "<<endl;
//     return;
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     int arr[n];
//     cout<<endl<<"Enter "<<n<<" elements ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<endl<<"Array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     linear_search(arr,n);
// }

//QUES 5
// template<typename T>
// void sum(T a){
//     cout<<endl<<"single parameter sum = "<<a;
// }

// template<typename T>
// void sum(T a,T b){
//     cout<<endl<<"2 parameters sum = "<<a+b;
// }

// template<typename T>
// void sum(T a,T b,T c){
//     cout<<endl<<"3 parameters sum = "<<a+b+c;
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter a,b,c: ";
//     cin>>a>>b>>c;
//     cout<<endl;

//     sum(a);
//     sum(a,b);
//     sum(a,b,c);

// }



