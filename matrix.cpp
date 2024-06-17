#include<iostream>
using namespace std;
#define size 3

class Example{
 public:
   
  void readingData (int arr[][size]){
   for (int row = 0; row < size; row++) {
          for (int col = 0; col < size; col++) {
           cin>>arr[row][col];
          }
      }
  }
  
  //fun. + two matrices 
  void add(int matFirst[][size],int matSecond[][size],int add[][size]) 
  { 
      for (int row = 0; row < size; row++) 
          for (int col = 0; col < size; col++) 
              add[row][col] = matFirst[row][col] + matSecond[row][col]; 
  }
  
  //fun. - two matrices
  void sub(int matFirst[][size],int matSecond[][size],int sub[][size]) 
  { 
      for (int row = 0; row < size; row++) 
          for (int col = 0; col < size; col++) 
              sub[row][col] = matFirst[row][col] - matSecond[row][col]; 
  }
  
  //fun. * two matrices
  void multiplication(int matFirst[][size],int matSecond[][size],int mul[][size])
  {
      for (int row = 0; row < size; row++) {
          for (int col = 0; col < size; col++) {
              mul[row][col] = 0;
              for (int k = 0; k < size; k++)
                  mul[row][col] += matFirst[row][k] * matSecond[k][col];
          }
      }
  }
  
  //fun.to print matrices data
  void printMatrix(int arr[][size]){
   for (int row = 0; row < size; row++) {
          for (int col = 0; col < size; col++) {
           cout<<arr[row][col]<<" ";
          }
          cout<<endl;
      }
  }
};

int main(){
 //displaying the message
 cout<<"Addition, Subtraction, and Multiplication is possible simultaneously on the Square Matrix."<<endl;
 
 //declaring 2-d Array to store matrices data
 int matFirst[size][size],matSecond[size][size],mul[size][size];
 int add[size][size], sub[size][size];
 
 //creating the class object
 Example obj;
 
 //taking elements of the matrices
 cout<<"Enter 1st Matrix "<<(size*size)<<" Elements : "<<endl;
 obj.readingData(matFirst);
 cout<<"Enter 2nd Matrix "<<(size*size)<<" Elements : "<<endl;
 obj.readingData(matSecond);
 cout<<"First Matrix Elements are : "<<endl;
 obj.printMatrix(matFirst);
 cout<<"Second Matrix Elements are : "<<endl;
 obj.printMatrix(matSecond);
 
 //calculating and displying the addition of the matrices
 cout<<"Addition of the Matrices are :"<<endl;
 obj.add(matFirst, matSecond, add);
 obj.printMatrix(add);
 
 //calculating and displaying the subtraction of the matrices
 cout<<"Subtraction of the Matrices are :"<<endl;
 obj.sub(matFirst, matSecond, sub);
 obj.printMatrix(sub);
 
 //calculating and displaying the multiplication of the matrices
 cout<<"Multiplication of the Matrices are :"<<endl;
 obj.multiplication(matFirst, matSecond, mul);
 obj.printMatrix(mul); 
}