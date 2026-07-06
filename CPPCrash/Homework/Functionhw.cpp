#include <iostream>
using namespace std;

void printcountingfrom1to100 (){
    for(int i=1;i<=100;i++)
    cout<<i<<endl;
}

float simpleinterest (int a,int b,int c){
    float si=(a*b*c)/100.0 ;

    return si; 

}



// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to print prime numbers from 1 to 100
void printPrimeNumbers() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}


void eligibleforvoting(int age ){
    if (age>=18){
        cout<<"Eligible"<<endl;
    }
    else{
        cout<<"Not eligible"<<endl;
        
    }

}
int main() {
    // printPrimeNumbers();
    eligibleforvoting(19);



    return 0;
}



// int main (){

// // printcountingfrom1to100();
// float ans = simpleinterest(5,3,4);
// cout<<ans<<endl;

// return 0;

// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to calculate SIP maturity amount
// double calculateSIP(double monthlyInvestment, double annualRate, int years) {
//     double monthlyRate = annualRate / (12 * 100);
//     int months = years * 12;

//     double maturityAmount =
//         monthlyInvestment *
//         ((pow(1 + monthlyRate, months) - 1) / monthlyRate) *
//         (1 + monthlyRate);

//     return maturityAmount;
// }

// int main() {
//     double monthlyInvestment, annualRate;
//     int years;

//     cout << "Enter Monthly Investment: ";
//     cin >> monthlyInvestment;

//     cout << "Enter Annual Interest Rate (%): ";
//     cin >> annualRate;

//     cout << "Enter Time (Years): ";
//     cin >> years;

//     double maturity = calculateSIP(monthlyInvestment, annualRate, years);

//     cout << "\nMaturity Amount = " << maturity << endl;

//     return 0;
// }