#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int EvenSum = 0;
    int OddSum = 0;
    for(int i=0; i<10; i++){
        if(arr[i]%2 == 0){
            EvenSum = EvenSum + arr[i];
        }
        else{
            OddSum = OddSum+ arr[i];
        }
    }

    cout << "Even sum is " << EvenSum << endl;
    cout << "Odd sum is " << OddSum << endl;
}