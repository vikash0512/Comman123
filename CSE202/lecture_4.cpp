// // ----------------------------------Inumeration------------------------

// // #include<iostream>
// // using namespace std;

// // int main(){
    
// //     enum days{sun,mon,tues,wed,thur,fri,sat};
// //     days day1,day2;
// //     day1=sun;
// //     day2=fri;
// //     cout<<day1<<"\t"<<day2<<endl;
// //     if(day1>day2){
// //         cout<<"day 1 comes after day 2"<<endl;
// //     }
// //     else{
// //         cout<<"day 1 comes before day 2"<<endl;
// //     }

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // enum week{Sun,Mon,Tues,Wed,Thur,Fri,Sat};

// // int main(){
// //     week today;
// //     today=Wed;
// //     cout<<"Day "<<today+1;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // enum seasons{Spring,Summer,Autumn,Winter};

// // int main(){
// //     seasons s;
// //     s=seasons(Summer+1);
// //     cout<<"Summer = "<<s<<endl;
// //     return 0;
// // }

// // ---------Using Enumeration inside Class----------------

// #include<iostream>
// using namespace std;

// class Year{
//     public:
//     enum Month{
//         Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
//     };
// void setMonth(Month month){
//     currentMonth=month;
// }
// Month getMonth(){
//     return currentMonth;
// }
// string getMonthString(Month month){
//     switch(month){
//         case Jan: return "January";
//         case Feb: return "February";
//         case Mar: return "March";
//         case Apr: return "April";
//         case May: return "May";
//         case Jun: return "June";
//         case Jul: return "July";
//         case Aug: return "August";
//         case Sep: return "September";
//         case Oct: return "October";
//         case Nov: return "November";
//         case Dec: return "December";
//         default: return "Invalid Month";
//     }
// }

// private: 
// Month currentMonth;

// };

// int main(){
//     Year year;
//     int month;

//     cout<<"Enter Month "<<endl;
//     cin>>month;

//     if(month>=1 && month<=12){
//         // Subtracting 1 from the input to match the enum values
//         Year::Month selectedMonth = static_cast<Year::Month>(month-1);
//         year.setMonth(selectedMonth);
//         cout<<"Month: "<<year.getMonthString(year.getMonth())<<endl;
//     }
//     else{
//         cout<<"Invalid Month Input"<<endl;
//     }

//     return 0;
// }



// -----------------------Inline Functions-----------------------

// Inline functions are those functions which are expanded at the same line where they are called(inline expansion). So instead of jumping to the function definition, function code will be pasted at the point of function call. It will reduce major overhead caused due to function calling.
// Exceptions: Loop functions, goto statement functions, recursive functions, functions having static values, function having return statements but not returning any values, switch statement functions.
// Inline is a request not a command to compiler which means compiler will decide whether a function can be inline or not.

// #include<iostream>
// using namespace std;

// class example{
//     int x;
//     public:
//     void set(int a){
//         x=a;
//     }
//     int getvalue();
// };
// inline int example::getvalue(){
//     return x;
// }

// int main(){
    
//     example obj;
//     int var;
//     cin>>var;
//     obj.set(var);
//     cout<<obj.getvalue()<<endl;
//     return 0;
// }

// Advantages to Inline Functions:
// -less overhead on cpu w.r.t context switching.
// -less time will be taken for execution as no time will be wasteg for jumping to the function definition and coming back.
// -lesser push and pop operation on stack.
// -efficiency of program will be increased.

// #include<iostream>
// using namespace std;

// inline int cube(int x){
//     return x*x*x;
// }

// int main(){
//     int val;
//     cin>>val;
//     cout<<cube(val)<<endl;
//     return 0;
// }


