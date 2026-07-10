#include <iostream>
#include <cstring>
using namespace std;


int getLength(char arr[]){
  int count =0;
  int index =0;
  while(arr[index]!='\0'){
    count ++;
    
    index++;
  }
  return index;

}
void concatArray(char a[],char b[]){
  int aIndex =getLength(a);                                                                
  int bIndex =0;

  while (b[bIndex] !='\0'){
    //star copying
    a[aIndex]=b[bIndex];
    aIndex++;
    bIndex++;

  }
  //end a string with null charaxter
  a[aIndex]='\0';

}


void copyArray(char actualArr[],char copyArr[]){
  int aIndex=0;
  int bIndex=0;

  while(actualArr[aIndex]!='\0'){
    //star copying
    copyArr[bIndex]=actualArr[aIndex];
    aIndex++;
    bIndex++;
  }
  copyArr[bIndex]='\0';
}
bool compareArray(char a[],char b[]){
  int aIndex =0;
  int bIndex =0;
  int aLength =getLength(a);
  while(aIndex<=aLength){
    if(a[aIndex]!=b[bIndex]){
      return false;
    }
    else{
        aIndex++;
        bIndex++;                                                                  
    }
  }
  //agar yaha tak aa gye ho, iskaa matlab saare
  //character match hogye
  return true;
}


  int main(){

    char actual[]="Anish";
    char ans[100] ;
    cout<<"Length of actual array:"<<strlen(actual)<<endl;
    strcpy(ans,actual); //(destination,source)
    cout<<ans<<endl;
    if(strcmp(actual,ans)==0){
      cout<<"char arrays are same"<<endl;
    }
    else{
      cout<<"char arrays are not same"<<endl;
    }
    // char arr[]="Anish";
    // char brr[]="Anish";
    // cout<<compareArray(arr,brr)<<endl;      

//   char actual[100]="Anish";
//   char ans[100];

//   copyArray(actual,ans);

//   cout<<"Printing ans array:"<<ans<<endl;

  //  char a[50]="Anish";
  //  char b[50]="Shinde";
  //  concatArray(a,b);
  //  cout<<"Printing a:"<<a<<endl;
  // cout<<"Printing a:"<<a<<endl;
  //  char arr[]="Anish";
  //  cout <<getLength(arr)<<endl;
  //   //Declare
    // char arr[10];

   // cout<<arr[3]<<endl;
    

//    char arr[10]="Anish";
//    cout<< arr[3] <<endl;
//    cout<<"printing 5th index"<<arr[5]<<endl;
//    int asciivalue =arr[5];
//    cout<<asciivalue<<endl;
  

//   char arr[4];
//   arr[0] ='a';
//   arr[1] ='b';
//   arr[2] ='\0';
  
//  int arr[4]={1,2,3,4};
//   cout<<arr<<endl;


//   char brr[ i6]= "Anish";
//   cout<<brr<<endl;
//   for(int i=0;i<5;i++){

  
//   cout<<brr[i]<<"  ";
//   }







    return 0;
}





