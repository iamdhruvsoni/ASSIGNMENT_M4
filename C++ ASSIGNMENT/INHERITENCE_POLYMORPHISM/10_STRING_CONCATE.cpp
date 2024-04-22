//concatenate two strings using operator overloading.

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        if (s == NULL) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

    MyString operator+(const MyString& other) {
        int len1 = strlen(str);
        int len2 = strlen(other.str);
        char* resultStr = new char[len1 + len2 + 1];
        strcpy(resultStr, str);
        strcat(resultStr, other.str);
        MyString result(resultStr);
        delete[] resultStr;
        return result;
    }

    void display() {
        cout << str << "\n";
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("C++ programming!");

    MyString result = str1 + str2;

    cout << "Concatenated string: ";
    result.display();

    return 0;
}

