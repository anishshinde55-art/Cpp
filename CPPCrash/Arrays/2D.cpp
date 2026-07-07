#include<iostream>
using namespace std;
void print2dArray(int arr[][4],int rowsize ,int colsize) {
    cout<<"Printing the 2D array:"<<endl;


    for (int row_index=0;row_index<=rowsize-1;row_index++){
         for(int col_index=0 ;col_index<=colsize-1;col_index++){
            cout<<arr[row_index][col_index]<<" ";

         }
          cout<<endl;
    }
}    
//jab bhi 2d array pass karo waha pe atleast column toh bata na padega


int main(){

    //declare
    //int arr[5][4];
   
    //intializatiom
    // int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    // cout<<arr[0][3]<<endl;


    int arr[3][4];
    int row =3;
    int col=4;
    for (int row_index=0;row_index<=row-1;row_index++){
         for(int col_index=0 ;col_index<=col-1;col_index++){
            cout<<"Enter the input for arr ["<<row_index<<"]["<<col_index<<"]";
             cin>>arr[row_index][col_index];

         }
          cout<<endl;
    }


    //printing
    print2dArray(arr,row,col);
     
}
    

    




    

