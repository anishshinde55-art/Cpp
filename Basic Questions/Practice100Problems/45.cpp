// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number:"<<endl;
//     cin>>n;


//     for(int num=2;num<=n;num++){
//         bool isPrime=true;


//         for(int i=2;i<=n;i++){
//            if (num%2==0){
//             isPrime=false;
//             break;

//            }
                   
//         }
//        if(isPrime){
//         cout<<num<<endl;
//        }

//     }


    









//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}