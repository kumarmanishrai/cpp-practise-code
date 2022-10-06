#include <iostream>
using namespace std;
// int main(){
//     cout << "Hello World!" <<endl;
// }
int main()
{
    //   int a = 23;
    //   cout << a << endl;

    //   char b = 'b';
    //   cout << b << endl;

    //   bool bl = true;
    //   cout << bl <<endl;

    //   float f = 1.3;
    //   cout<< f <<endl;

    //   double d = 3.467;
    //   cout << d << endl;

    //   int size = sizeof(a);
    //   cout <<" Size of a is:"<< size <<endl;

    // int a = 'a';   //Casting
    // cout << a << endl;

    // char ch = 98;
    // cout << ch <<endl;

    // unsigned int s = -112;
    // cout << s <<endl;

    // int q = 5/2;
    // cout << q <<endl;

    // int a = 4;
    // int b = 5;
    // bool bl = (a!=b);
    // cout<< bl <<endl;

    // Conditionals:
    // int a;
    // int b;
    // cout <<"Enter value of a: ";
    // cin >> a ;
    // cout << "Enter value of b: ";
    // cin >> b ;
    // if(a>=b){
    //     cout<< "Result is: "<< a<<endl;
    // }
    // else{
    //     cout<< "Result is: "<< b<<endl;
    // }

    // int a;
    // cout << "Enter a number: ";
    // cin >> a ;
    // if(a>0){
    //     cout << "You entered a positive number"<<endl;
    // }
    // else if(a<0){
    //     cout <<"You entered a negative number"<<endl;
    // }
    // else{
    //     cout << "You entered zero"<<endl;
    // }

    // Loops
    //while loop
    // int a;
    // int i = 1;
    // cout << "Enter a number a: ";
    // cin >> a;
    // while(i<=a){
    //     cout << i <<endl;
    //     i+=1;
    // }

    //SUM OF N CONSECUTIVE INTEGER
    // int a;
    // int sum = 0;
    // int i = 1;
    // cout << "Enter a number a: ";
    // cin >> a;
    // while(i<=a){
    //     sum = sum +i;
    //     i+=1;
    // }
    // cout << sum <<endl;

    //PRIME OR NOT PRIME
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int i =2;
    // while(i<n){
    //     if(n%i ==0){
    //         cout << "Not prime for"<<i <<endl;
    //     }
    //     else{
    //         cout << "Prime for" << i <<endl;
    //     }
    //     i = i+1;
    // }


    //PRINTING PATTERNS

    // int a;
    // cout << "Number of rows and columns: ";
    // cin >> a;
    // int i = 1; //row
    // while(i<=a){
    //     int j = 1; //column
    //      while(j<=a){
    //          cout << "*" ;
    //          j+=1;
    //      }
    //      cout <<endl;
    //      i+=1;


    // int n;
    // cin >> n ;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<< i;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }


    // int n;
    // cin>> n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout << j;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >>n;
    // int count = 1;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count;
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }


    // int n;
    // cin >>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout << "*";
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >>n;
    // int i=1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout <<i;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;       Can we do this without using val? How?
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int val = i;
    //     while (j <= i)
    //     {
    //         cout << val;
    //         val += 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }


    // int n;         // i-j+1;
    // cin >> n;
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout <<i-j+1<<" ";
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A'+i-1;
    //         cout <<ch;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A'+j-1;
    //         cout <<ch;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i=1;
    // char val ='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout <<val;
    //         val = val+1;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while (j<=n){
    //         char val= 'A'+i+j-2;
    //         cout << val;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j=n;
    //     while(j>=i){
    //         cout <<'*';
    //         j = j-1;
    //     }
    //     cout <<endl;
    //     i = i+1;
    // }


    // int n;
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j=1;
    //     char val = 'A'+i-1;
    //     while(j<=i){
    //         cout << val;
    //         j = j+1;
    //     }
    //     cout <<endl;
    //     i = i+1;
    // }


    // int n;
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     char val='A'+i-1;
    //     while(j<=n){
    //     cout << val;
    //         j = j+1;
    //         val+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


    // int n;
    // cin >> n;
    // int i = 1;
    // char val = 'A'+i-1;
    // while(i<=n){
    //     int j =1;
    //     while(j<=i){
    //         cout <<val;
    //         val+=1;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }


    // int n;
    // cin >>n;
    // int i = 1;

    // while(i<=n){
    //     int j = 1;
    //     char val = 'D'+1-i;
    //     while(j<=i){
    //         cout <<val;
    //         val+=1;
    //         j+=1;
    //     }
    //     cout <<endl;
    //     i+=1;
    // }


   


    //FOR LOOP

    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     cout <<i<<endl;
    // }


    // int n;
    // cin >>n;
    // int sum =0;
    // for(int i=1; i<=n; i++){
    //     sum = sum +i;
    // }
    // cout <<sum;


    //fibonacci series***
    // int n =10;
    // int a =0;
    // int b =1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1; i<=n; i++){
    //     int nxtnum = a+b;
    //     cout << nxtnum<<" ";

    //     a=b;
    //     b =nxtnum;

    // }


    



}