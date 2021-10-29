#include<bits/stdc++.h>
using namespace std;

int main(){
    // ------- Making string out of one char -----------
    // string str(12, 'a');
    // cout << str << endl;

    // --------- String input ------------
    // string str;
    // getline(cin, str); // Takes input with spaces
    // cout << str << endl;

    string s1 = "Martin";
    string s2 = "Ayush";

    // ----------- string concatination --------------
    // cout << s1 + " " + s2 << endl;
    // s1.append(s2);
    // cout << s1 << endl;

    // ----------Inserting in string ------------
    // s1.insert(3, "ok");
    // cout << s1 << endl;

    // --------- calc len or size of string -----------
    // cout << s1.size() << endl;
    // cout << s1.length() << endl;

    // --------- Erasing string ---------------
    // s1.clear(); // erase string at this point
    // cout << s1 << endl; // Print nothing

    // -------- Erasing sub-string ----------------
    // s1.erase(2); // erasing from 2 to end
    // s1.erase(0, 3); // erasing fom index to (no of char's)
    // cout << s1 << endl;

    // ------ check if 2 string are equal  ---------------
    // cout << s1.compare(s2) << endl;
    // if (!s1.compare(s2)){
    //     cout << "strings are equal !" << endl;
    // }else{
    //     cout << "Strings are not equal!" << endl; 
    // }

    // if(s1 == s2){
    //     cout << "Strings are equal!\n";
    // }else{
    //     cout << "Strings are not equal\n";
    // }

    // --------- check if string is empty --------------
    // s1.clear();
    // if (s1.empty()){
    //     cout << "String is empty!" << endl;
    // }

    // -------- Searching in String ---------------
    // s1.find("tin"); // returns index from t to n
    // cout << s1[3] << endl;
    
    // ---------- Substring -------------
    // string s = s1.substr(3, 6);
    // cout << s << endl;
    
    // -----------String to int --------------
    // string s3 = "1234";
    // int x = stoi(s3);
    // cout << x+2 << endl;

    // ------------int to String ------------------
    // int x = 786;
    // cout << to_string(x) + "2" <<endl;

    // ------------Sorting in string--------------
    // sort(s1.begin(), s1.end());
    // cout << s1 << endl;

    // ----------------String in descending order --------------------
    // sort(s1.begin(), s1.end(), greater<int>());

    // ---------- String transformation -- ::toupper ::tolower -------------
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
    // cout << s1 << endl;

    return 0;
}