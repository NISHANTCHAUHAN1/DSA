//1
// #include<iostream> 
// int main() {
//     std::cout << "Hey Nish" ;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     cout << "Hey nish its going" << "\n";
//     cout << "yosh bro";
// }

//2
// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cin >> x;
//     cout << "The value of X is: " << x;
//     return 0;
// }

//3
// #include<iostream>
// using namespace std;
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << "The value of x is = " << x << " and y is = " << y;
//     return 0;
// }


//4
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int x, y;
//     cin >> x >> y ;
//     cout << "The value of x is = " << x << " and y is = " << y << "\n";
//     int sum = x + y;
//     cout << "the sum x and y is = " << sum;
//     return 0;
// }


//5
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     cout << "enter the a" << "\n";
//     cin >> a;
//     cout << "Enter the b" << "\n";
//     cin >> b;
//     int avg = (a+b)/2;
//     cout << "the sum of a and b is = " << avg;
//     return 0;
// }


                  // data types 
//6
// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     int a = 10;
//     cout << "A = " << a << "\n";
//     char b  = 'b';
//     cout << "b = " << b << "\n";
//     bool c = true;
//     cout << "c = " << c << "\n";
//     float d = 12.4;
//     cout << "d = " << d << "\n";
//     double e = 76.5;
//     cout << "e = " << e << "\n";

//     int size = sizeof(c);
//     cout << "size of " << size;
     
// }

                           // if -else

//7
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int age;
//     cin >> age;
//     if(age >= 18) {
//         cout << "You are adult";
//     }
//     else if (age >= 14) {
//         cout << "Teenager";
//     }
//     else {
//         cout << "abhi baache hai tu";
//     }
//     return 0;
// }

//8
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int marks;
//     cin >> marks;
//     if(marks <= 27) {
//         cout << "Failed bruda";
//     }
//     else if(marks >= 27 && marks <= 45) {
//         cout << "Geting D Grade";
//     }
//     else if(marks >= 45 && marks <= 60) {
//         cout << "Geting C Grade";
//     }
//     else if(marks >= 60 && marks <= 80) {
//         cout << "Geting B Grade";
//     }
//     else if(marks >= 80 && marks <= 100){
//         cout << "Geting A Grade";
//     }
//    else if(marks > 100) {
//     cout << "Dad Ki Goverment hai kya";
//    }
// }


//9
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter the Number" << "\n";
//     cin >> num;
//     if(num %2 == 0) {
//         cout << "Even Num";
//     }
//     else {
//         cout << "Odd Num";
//     }
// }


                                //switch statement

//10
// #include<iostream>
// using namespace std;
// int main() {
//     int day;
//     cin >> day;

//     switch (day) {
//         case 1:
//         cout << "Mondat";
//         break;
//         case 2:
//         cout << "Tuesday";
//         break;
//         case 3:
//         cout << "Webnesday";
//         break;
//         case 4:
//         cout << "Thursday";
//         break;
//         case 5:
//         cout << "Friday";
//         break;
//         case 6:
//         cout << "Saturday";
//         break;
//         case 7:
//         cout << "Sunday";
//         break;
//         default: 
//         cout << "Invaild";
//     } 
// }

                                       // loops;

//11
// #include<iostream>
// using namespace std;
// int main() {
//     int i, n;
//     cin >> n;
//     for(i=1;i<=n;i++) {
//         cout << i*2 << "\n";
//     }
// }


//12
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=0;i<=5;i++) {
//         for(j=0;j<=5;j++) {
//             cout << "i = " << i << " j = " << j << endl;
//         }
//     }
// }

//13
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0;i<=10;i++) {
//         if(i%2 == 0) {
//             cout << i <<" Even" << "\n";
//         }
//         else {
//             cout << i << " Odd" << "\n";
//         }
//     }
// }


//14
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0;i<=30;i +=5) {
//         cout << "i = "  << i << endl;
//     }
//     return 0;
// }

                                  // while loop;

//15
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n) {
//         cout << "i = " << i << "\t";
//         i++;
//     }
//     return 0;
// }

//16
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the n";
//     cin >> n;
//     int sum = 0;
//     int i = 1;
//     while(i<=n) {
//         sum = sum+i;
//         cout << "Sum of i Num "  <<  sum << "\n";
//         i++;
//     }
//     return 0;
// }


//17
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int oddnum = 0;
//     int i=1;
//     while(i<=n) {
//         if(i%2==0) {
//             sum = sum+i;
//             cout << "the sum of even num is : " << sum << endl;
//         }
//         else if(i%2 != 0) {
//             oddnum = oddnum+i;
//             cout << "the sum of odd num is : " << oddnum << endl;
//         }
//         i++;
//     }
//     return 0;
// }


//18
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;

//     int i = 2;
//     while(i<n) {
//         if(n%i == 0) {
//             cout << "Not Prime Num for " << i << endl; 
//         }
//         else {
//             cout << "Prime Num for " << i << endl;
//         }
//         i++;
//     }
//     return 0;
// }

                                        // functions

//19
// #include<iostream>
// using namespace std;
// int power(int a,int b) {
//     int ans = 1;
//     for(int i=1;i<=b;i++) {
//         ans = ans*a;
//     }
//     return ans;
// }
// int main() {
//     int a,b;
//     int c,d;
//     cin >> a >> b >> c >> d;
//     // power(a,b);
//     cout << "Answer is : " << power(a,b) << endl; 
//     cout << "Answer is : " << power(c,d) << endl; 

//     return 0;
// }


//20
// #include<iostream>
// using namespace std;
// int EvenOrOdd(int n) {
//     if(n%2 == 0) {
//         cout << "Even num is " << n  << endl;
//     }
//     else {
//         cout << "Odd num is " << n << endl;
//     }
//     return n;
// }
// int main() {
//     int num;
//     cout << "enter the num " << "\n";
//     cin >> num;
//     EvenOrOdd(num);
// }

//21
// #include<iostream>
// using namespace std;
// int factorial(int n) {
//     int fact = 1;
//     for(int i=1;i<=n;i++) {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main() {
//     int num;
//     cin >> num;
//     cout << "fact is " << factorial(num) << endl;
//     return 0;
// }


//22
// #include<iostream>
// using namespace std;

// bool isPrimeOrNot(int n) {
//     for(int i=2;i<n;i++) {
//         if(n%i == 0) {
//             return 0;
//         }
//         return 1;
//     }
// }
// int main() {
//     int num;
//     cout << "Enter the num" << endl;
//     cin >> num;

//     // cout << "the num is " << isPrimeOrNot(num) << endl;
//     if(isPrimeOrNot(num)) {
//         cout << " is prime num";
//     }
//     else {
//         cout << "Not Prime Nun bro";
//     }
// }

//23             // call by value   -> we send the copy of value not the address of value
// #include<iostream>
// using namespace std;
// void dummy(int n) {
//     n++;
//     cout << "The n is : " << n << endl;
// }
// int main() {
//     int n= 2;
//     dummy(n);
//     cout << "the n " << n << endl;
// }


//24                 // we send the address of value using & there or many options to share the address
// #include<iostream>
// using namespace std;
// void dummy(int &n) {
//     n++;
//     cout << "The n is : " << n << endl;
// }
// int main() {
//     int n= 2;
//     dummy(n);
//     cout << "the n " << n << endl;
// }




