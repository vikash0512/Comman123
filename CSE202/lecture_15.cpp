// #include <iostream>
// using namespace std;

// int main() {
//     double *principal, *rate, *time, *interest;
    
//     // Allocate memory for variables
//     principal = new double;
//     rate = new double;
//     time = new double;
//     interest = new double;

//     if (principal == nullptr || rate == nullptr || time == nullptr || interest == nullptr) {
//         cout << "Memory allocation failed. Exiting..." << endl;
//         return 1;
//     }

//     // Input
//     cout << "Enter Principal Amount: ";
//     cin >> *principal;
//     cout << "Enter Rate of Interest (in percentage): ";
//     cin >> *rate;
//     cout << "Enter Time (in years): ";
//     cin >> *time;

//     // Calculate Simple Interest
//     *interest = (*principal * *rate * *time) / 100.0;

//     // Output
//     cout << "Principal Amount: $" << *principal << endl;
//     cout << "Rate of Interest: " << *rate << "%" << endl;
//     cout << "Time: " << *time << " years" << endl;
//     cout << "Simple Interest: $" << *interest << endl;

//     // Free allocated memory
//     delete principal;
//     delete rate;
//     delete time;
//     delete interest;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int* pvalue = NULL;
//     pvalue = new int;
//     *pvalue=23;
//     cout<<"Address where pointer stored: "<<pvalue<<endl;
//     delete pvalue;
//     cout<<"Address where pointer stored after deletion: "<<pvalue<<endl;
//     pvalue=NULL;
//     cout<<"\n"<<pvalue;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// class string1 {
// private:
//     char* str;

// public:
//     string1(const char* s) {
//         int length = strlen(s);
//         str = new char[length + 1];
//         strcpy(str, s);
//     }

//     ~string1() {
//         cout << "deleting str\n";
//         delete[] str;
//     }

//     void display() {
//         cout << str << endl;
//     }
// };

// int main() {
//     const char* s = "this is dma example for string";
//     string1 s1(s);
//     cout << "s1 = ";
//     s1.display();
// }

#include <iostream>
#include <cstring>

class House {
public:
    House() : address(new char[30]) {}
    virtual ~House() { delete[] address; }
    void SetAddress(const char* newAddress) {
    strcpy(address, newAddress);
    }
    void DisplayAddress() {
    std::cout << "Address: " << address;
    }
private:
    char* address;
};

int main() {
    House house;
        house.SetAddress("123 Main Street");
    house.DisplayAddress();
    return 0;
}