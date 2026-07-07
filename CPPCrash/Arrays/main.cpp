 #include<iostream>
 using namespace std;

 void printArray(int arr[],int size){
    //printing
    for(int index=0;index<=size-1;index++){
        cout<<arr[index]<<" ";
    }

}
   void storemultipleof10(int num[],int size){
    int count =1;
    for(int index=0;index<=size-1;index++){
        num[index]=10*count;
        count++;
    }
}

    void flip0to1(int arr[],int size){
        for(int index=0;index<=size-1;index++)
        if(arr[index]==1){
            arr[index]=0;
        }
        else{
            arr[index]=1;
        }
    }
   
 


 int main(){
    // int arr[5];
    // int size=5;
    // printArray(arr,size);
 
    // int arr[10];
    // int size=10;
    // storemultipleof10(arr,size);
    // printArray(arr,size);



    int arr[]={1,1,0,0,1,0,1,0};
    int size =8;
    cout<<"before :"<<endl;
    printArray(arr,size);


    flip0to1(arr,size);

    cout<<"after:"<<endl;
    printArray(arr,size);
 //mostly array pe traverse karna hi padta hai kuch bhi karna hai toh
 
//  //declaration
//  int laxman[101];
//  int arr[11];

//  //initialisation   
//  int brr[5]={10,20,30,40,50};
//  int crr[]={10,20,30,40,50};

 



//Array is a data structure jiski andar same type ki mulriple value declare kar sakte hai instead of declaring multiple variables


//  int multipleof2[10]={2,4,6,8,10,12,14,16,18,20};
//  cout<<multipleof2[9]<<endl;
 
 //traverse
//  for(int i=0;i<=9;i++){
//     cout<<multipleof2[i]<<endl;
//  }
 

 //input in array
//  int arr[5];
//  for(int i=0;i<=4;i++){
//     cout<<"Enter the value for arr["<<i<<"]:";
//     cin>>arr[i];
//     cout<<endl;
//  }
//  for(int i=0;i<=4;i++){
//     cout<<arr[i]<<"";
//  }



//  int arr[]={10,20,30,40,50};
//  int sum =0;
//  for (int index=0;index<=4;index++){
//     sum=sum+arr[index];

//  }
//  cout<<"Total sum:"<<sum<<endl;






    return 0;
}