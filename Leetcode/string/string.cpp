// #include<iostream>
// using namespace std;

// int getlength(char name[]) {
//     int count = 0;
//     for(int i=0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main() {
//     char name[20];

//     cout << "Enter name \n";
//     cin >> name;

//     cout << "your name is " << name ;
//     cout << endl;
//     cout << "the length of name is  " << getlength(name);
// }


// reverse 
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "hello"; 

//     int s = 0;
//     int e = str.size() - 1; 

//     while (s < e) {
//         swap(str[s], str[e]); 
//         s++;
//         e--;
//     }

//     cout << str << endl; 
//     return 0;
// }


// check Palindrome
// #include <iostream>
// #include <string>
// using namespace std;

// char tolowerCase(char ch) {
//     if (ch >= 'a' && ch <= 'z') { // Already lowercase
//         return ch;
//     } else if (ch >= 'A' && ch <= 'Z') { // Convert uppercase to lowercase
//         return ch - 'A' + 'a';
//     } else { // Non-alphabetic characters remain unchanged
//         return ch;
//     }
// }

// bool checkPalindrome(string palin) {
//     int s = 0;
//     int e = palin.size() - 1;

//     while (s < e) {
//         // Ignore non-alphanumeric characters
//         while (s < e && !isalnum(palin[s])) s++;
//         while (s < e && !isalnum(palin[e])) e--;

//         // Compare characters case-insensitively
//         if (tolowerCase(palin[s]) != tolowerCase(palin[e])) {
//             return false;
//         } else {
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

// int main() {
//     string palin;
    
//     cout << "Enter a palindrome word or sentence: " << endl;
//     getline(cin, palin); // Use getline to handle spaces

//     if (checkPalindrome(palin)) {
//         cout << "The input is a palindrome!" << endl;
//     } else {
//         cout << "The input is not a palindrome!" << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <cctype>  // For isalnum and tolower
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters using if
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])) {
            right--;
        } else {
            // Compare characters, ignoring case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }

    return true;
}

int main() {
    string s = "c1 O$d@eeD o1c";
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
