// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }

//     return n * factorial(n-1);
// }
// int main(){
//     int n;
//     cout << "Enter the n" << endl;
//     cin >> n;

//     int ans = factorial(n);
//     cout << "the fact is " << ans ;
// }


// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n == 0) {
//         return 1;
//     }

//     return 2 * power(n-1);
// }
// int main() {
//     int n;
//     cout << "enter the n" << endl;
//     cin >> n;

//     int ans = power(n);
//     cout << ans << endl;
// }


// #include<iostream>
// using namespace std;
// int counting(int n) {
//     if(n == 0){
//         return 1;
//     }

//     counting(n-1);

//     cout << n << " ";
// }
// int main() {
//     int n;
//     cout << "enter the n" << endl;
//     cin >> n;

//     counting(n);
// }


// #include<iostream>
// using namespace std;
// void reachhome(int src,int dest){

//     cout << "source " << src << "destination" << dest << endl;
//     if(src == dest){
//         cout << "Done destination " << endl;
//         return;
//     }

//     src++;

//     reachhome(src, dest);
// }
// int main() {
//     int src = 1;
//     int dest = 10;

//     reachhome(src, dest);
// }

