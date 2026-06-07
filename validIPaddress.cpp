// #include <bits/stdc++.h>
// using namespace std;

// int validIP(int &ld, int IP[10])
// {
//     int temp = ld;
//     int count = 0;
//     while (temp != 0)
//     {
//         count++;
//         temp /= 10;
//     }

//     int i = 0;
//     while (i < count - 1)
//     {
//         IP[i] = ld;
//         IP[i+1] = '.';
//         i++;
//     }
// }
// void shrtlist(int *IP[10], int &Str)
// {
//     while (Str != 0)
//     {
//         int ld = Str % 1000; // 632
//         if (ld <= 254)
//         {
//             validIP(ld, IP[10]);
//             Str /= 1000;
//         }
//         else
//         {
//             int reld = ld;  // 632
//             ld = reld % 100; // 32
//             if (ld <= 254)
//             {
//                 validIP(ld, IP[10]);
//             }
//             else
//             {
//                 int reld = ld;
//                 ld = Str % 10;
//             }
//             Str /= 100;
//         }

//     }
// }

// int main()
// {
//     int **IP[10];
//     string str; // 5634785632
//     cout << "Enter string :: ";
//     cin >> str;

//     int Str;
//     str = (int)Str;
//     if (str.length() <= 10)
//     {

//         shrtlist(IP[10], Str);
//         for(int i = 0;i<10;i++){
//         cout<<(**IP[i])<<" ";
//         }
//     }
//     else
//     {
//         cout << "Enter valid string";
//     }

// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool isValid(string s) {
//     if (s.empty() || s.length() > 3) return false;
//     if (s[0] == '0' && s.length() > 1) return false; // No leading zeros
//     int val = stoi(s);
//     return val >= 0 && val <= 255;
// }

// void solve(string s, int index, int dots, string current, vector<string>& result) {
//     if (dots == 3) {
//         string lastPart = s.substr(index);
//         if (isValid(lastPart)) {
//             result.push_back(current + lastPart);
//         }
//         return;
//     }

//     for (int len = 1; len <= 3 && index + len < s.length(); ++len) {
//         string part = s.substr(index, len);
//         if (isValid(part)) {
//             solve(s, index + len, dots + 1, current + part + ".", result);
//         }
//     }
// }

// int main() {
//     string str;
//     cout << "Enter string: ";
//     cin >> str;

//     if (str.length() < 4 || str.length() > 12) {
//         cout << "Invalid length for an IP address.";
//         return 0;
//     }

//     vector<string> result;
//     solve(str, 0, 0, "", result);

//     if (result.empty()) {
//         cout << "No valid IP addresses found.";
//     } else {
//         for (const string& ip : result) {
//             cout << ip << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // Check if a segment is valid (0–255, no leading zeros unless single digit)
// bool isValid(string s) {
//     if (s.empty() || s.size() > 3) return false;
//     if (s.size() > 1 && s[0] == '0') return false;
//     int val = stoi(s);
//     return val >= 0 && val <= 255;
// }

// // Generate all possible valid IPs from numeric string
// void generateIPs(string str) {
//     int n = str.size();
//     for (int i = 1; i < 4 && i < n; i++) {
//         for (int j = i+1; j < i+4 && j < n; j++) {
//             for (int k = j+1; k < j+4 && k < n; k++) {
//                 string a = str.substr(0, i);
//                 string b = str.substr(i, j-i);
//                 string c = str.substr(j, k-j);
//                 string d = str.substr(k);
//                 if (isValid(a) && isValid(b) && isValid(c) && isValid(d)) {
//                     cout << a << "." << b << "." << c << "." << d << endl;
//                 }
//             }
//         }
//     }
// }

// int main() {
//     string str;
//     cout << "Enter numeric string: ";
//     cin >> str;

//     if (str.length() <= 12) { // max length for IP digits
//         generateIPs(str);
//     } else {
//         cout << "Enter valid string (<=12 digits)" << endl;
//     }
//     return 0;
// }










