// // #include <iostream>
// // #include <algorithm>
// // #include <vector>
// // using namespace std;
// // void nextPermutation(vector<int>& nums) {
// //     int n = nums.size();
// //     int i = n - 2;
// //     while (i >= 0 && nums[i] >= nums[i + 1]) {
// //         i--;
// //     }
// //     if (i >= 0) {
// //         int j = n - 1;
// //         while (j > i && nums[j] <= nums[i]) {
// //             j--;
// //         }    
// //         swap(nums[i], nums[j]);
// //     }
// //     reverse(nums.begin() + i + 1, nums.end());
// // }
// // int main() {
// //     int N;
// //     vector<int> nums;
// //     cin >> N;
// //     for (int i = 0; i < N; ++i) {
// //         int num;
// //         cin >> num;
// //         nums.push_back(num);
// //     }
// //     nextPermutation(nums);
// //     for (int i = 0; i < N; ++i) {
// //         cout << nums[i] << " ";
// //     }
// //     cout << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// //     int K;
// //     cout << "Enter the number of sorted arrays (K): ";
// //     cin >> K;
// //     vector<vector<int>> arrays(K);
// //     vector<int> sizes(K);
// //     for (int i = 0; i < K; ++i) {
// //         int n;
// //         cout << "Enter the size of array " << i + 1 << ": ";
// //         cin >> n;
// //         sizes[i] = n;
// //         arrays[i].resize(n);
// //         cout << "Enter " << n << " elements for array " << i + 1 << ": ";
// //         for (int j = 0; j < n; ++j) {
// //             cin >> arrays[i][j];
// //         }
// //     }
// //     vector<int> merged;
// //     for (int i = 0; i < K; ++i) {
// //         merged.insert(merged.end(), arrays[i].begin(), arrays[i].end());
// //     }
// //     sort(merged.begin(), merged.end(), greater<int>());
// //     cout << "Merged and sorted array (in descending order): ";
// //     for (int num : merged) {
// //         cout << num << " ";
// //     }
// //     cout << endl;
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // enum class LetterType {
// //     Vowel,
// //     Consonant,
// //     Invalid
// // };

// // class LetterAnalyzer {
// // public:
// //     static LetterType analyze(char c) {
// //         if (isVowel(c)) {
// //             return LetterType::Vowel;
// //         } else if (isConsonant(c)) {
// //             return LetterType::Consonant;
// //         } else {
// //             return LetterType::Invalid;
// //         }
// //     }

// // private:
// //     static bool isVowel(char c) {
// //         c = toupper(c);
// //         return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
// //     }

// //     static bool isConsonant(char c) {
// //         return (isalpha(c) && !isVowel(c));
// //     }
// // };

// // int main() {
// //     char input;
// //     cout << "Enter a character: ";
// //     cin >> input;

// //     LetterType result = LetterAnalyzer::analyze(input);

// //     if (result == LetterType::Vowel) {
// //         cout << "vowel" << endl;
// //     } else if (result == LetterType::Consonant) {
// //         cout << "consonant" << endl;
// //     } else {
// //         cout << "Invalid input" << endl;
// //     }

// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // union Customers {
// //     char name[100];
// //     int accountNumber;
// //     float balance;
// // };
// // void increment_balance(Customers c[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         if (c[i].balance > 1000) {
// //             cout << c[i].balance + 100 << " ";
// //         }
// //     }
// //     cout << endl;
// // }
// // int main() {
// //     int N;
// //     cin >> N;
// //     Customers customers[N];
// //     for (int i = 0; i < N; i++) {
// //         cin >> customers[i].name >> customers[i].accountNumber >> customers[i].balance;
// //     }
// //     increment_balance(customers, N);
// //     return 0;
// // }

// // #include <iostream>
// // #include <iomanip>
// // using namespace std;
// // const double PI = 3.14;
// // struct Circle {
// //     double radius;
// // };
// // int main() {
// //     Circle garden;
// //     cin >> garden.radius;
// //     double circumference = 2 * PI * garden.radius;
// //     double area = PI * garden.radius * garden.radius;
// //     cout << fixed << setprecision(2);
// //     cout << circumference << endl;
// //     cout<< area << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;
// // struct Student {
// //     string name;
// //     int rollNumber;
// //     int marks[5];
// //     float average;
// //     string result;
// //     string grade;
// // };
// // int main() {
// //     Student student;
// //     getline(cin, student.name);
// //     cin >> student.rollNumber;
// //     for (int i = 0; i < 5; i++) {
// //         cin >> student.marks[i];
// //     }
// //     student.average = (student.marks[0]+student.marks[1]+student.marks[2]+student.marks[3]+student.marks[4])/5;
// //     int count = 0;
// //     for(int i=0;i<5;i++){
// //         if(student.marks[i]<50){
// //             count++;
// //         }
// //     }
// //     if (student.marks[0] >= 50 && student.marks[1] >= 50 && student.marks[2] >= 50 && student.marks[3] >= 50 && student.marks[4] >= 50) {
// //         student.result = "Pass";
// //     } else if (count<=3) {
// //         student.result = "Fail";
// //     } 
// //     if (student.average >= 75) {
// //         student.grade = "Distinction";
// //     } else if (student.average >= 60&&student.average<=74) {
// //         student.grade = "First Class";
// //     } else if (student.average >= 50&&student.average<=59) {
// //         student.grade = "Second Class";
// //     }
// //     cout << "NAME: " << student.name << endl;
// //     cout << "ROLL NO: " << student.rollNumber << endl;
// //     cout << "RESULT: " << student.result << endl;
// //     if(student.result=="Pass"){
// //     cout << student.grade << endl;}
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class DigitalDiary {
// // private:
// //     int hours, minutes, days, months, years;
// // public:
// //     DigitalDiary(int h, int m, int d, int mo, int y) {
// //         hours = h;
// //         minutes = m;
// //         days = d;
// //         months = mo;
// //         years = y;
// //     }
// //     void display() {
// //         if (days < 1 || days > 31 || months < 1 || months > 12 || years < 0 || years > 9999 ||
// //             hours < 0 || hours >= 24 || minutes < 0 || minutes >= 60) {
// //             cout << "Invalid" << endl;
// //             return;
// //         }
// //         cout << "Date:" << days << "-" << months << "-" << years << endl;
// //         cout << "Time:" << hours << " hrs " << minutes << " mins" << endl;
// //         int totalMinutes = hours * 60 + minutes;
// //         cout << "Total mins:" << totalMinutes << endl;
// //     }
// // };
// // int main() {
// //     int hours, minutes, days, months, years;
// //     cin >> hours >> minutes >> days >> months >> years;
// //     DigitalDiary diary(hours, minutes, days, months, years);
// //     diary.display();
// //     return 0;
// // }



// // #include <iostream>
// // #include <iomanip>
// // class TemperatureConverter {
// //     double celsius;
// // public:
// //     TemperatureConverter(double c);
// //     double getCelsius();
// //     double getFahrenheit();
// //     double getKelvin();
// // };
// // TemperatureConverter::TemperatureConverter(double c) {
// //     celsius = c;
// // }
// // double TemperatureConverter::getCelsius() {
// //     return celsius;
// // }
// // double TemperatureConverter::getFahrenheit() {
// //     return (celsius * 9 / 5) + 32;
// // }
// // double TemperatureConverter::getKelvin() {
// //     return celsius + 273.15;
// // }
// // int main() {
// //     double celsius;
// //     std::cin >> celsius;
// //     TemperatureConverter converter(celsius);
// //     std::cout << std::fixed << std::setprecision(2);
// //     std::cout << "Temperature in Fahrenheit: " << converter.getFahrenheit() << std::endl;
// //     std::cout << "Temperature in Kelvin: " << converter.getKelvin() << std::endl;

// //     return 0;
// // }



// // #include <iostream>
// // using namespace std;
// // inline int gcd(int a, int b) {
// //     while (b != 0) {
// //         int temp = b;
// //         b = a % b;
// //         a = temp;
// //     }
// //     return a;
// // }
// // int main() {
// //     int x, y;
// //     cin >> x >> y;
// //     int result = gcd(x, y);
// //     cout << result << endl;
// //     return 0;
// // }


// // #include <iostream>
// // #include <iomanip>

// // class Shop {
// // private:
// //     static double totalSales;

// // public:
// //     static void addSales(double salesAmount) {
// //         totalSales += salesAmount;
// //     }

// //     static double getTotalSales() {
// //         return totalSales;
// //     }
// // };

// // double Shop::totalSales = 0;

// // int main() {
// //     int n;
// //     std::cout << "Enter the number of sale instances: ";
// //     std::cin >> n;

// //     double totalAmount = 0;

// //     for (int i = 1; i <= n; i++) {
// //         double amount;
// //         std::cout << "Enter sales amount for instance " << i << ": ";
// //         std::cin >> amount;

// //         Shop::addSales(amount);
// //         totalAmount += amount;
// //     }

// //     std::cout << std::fixed << std::setprecision(2);
// //     std::cout << "Total sales amount: " << Shop::getTotalSales() << std::endl;

// //     return 0;
// // }


// // #include <iostream>
// // #include <string>
// // using namespace std;
// // class phone_number {
// // public:
// //     string num;
// //     void input_num();
// //     void output() {
// //         cout << "Your entered number is:" << num << endl;
// //     }
// //     static inline void check_num(string num);
// // };
// // inline void phone_number::check_num(std::string num) {
// //     if (num.length() != 10 || num.find_first_not_of("0123456789") != stringnpos) {
// //         cout << "Entered Phone number is wrong" << endl;
// //         cout << "Your entered number is:" << num << endl;
// //         exit(1);
// //     }
// // }
// // void phone_number::input_num(){
// //     cin>>num;
// // }
// // int main() {
// //     phone_number ph;
// //     ph.input_num();
// //     phone_number::check_num(ph.num);
// //     ph.output();
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class Money {
// // private:
// //     int rupee;
// //     int paisa;

// // public:
// //     Money(int r, int p) : rupee(r), paisa(p) {}
// //     int getRupee() const {
// //         return rupee;
// //     }
// //     int getPaisa() const {
// //         return paisa;
// //     }
// //     void setRupee(int r) {
// //         rupee = r;
// //     }
// //     void setPaisa(int p) {
// //         paisa = p;
// //     }
// // };
// // int main() {
// //     int rupee1, paisa1, rupee2, paisa2;
// //     cin >> rupee1 >> paisa1;
// //     cin >> rupee2 >> paisa2;
// //     Money amount1(rupee1, paisa1); 
// //     Money amount2(rupee2, paisa2); 

// //     int totalRupee = amount1.getRupee() + amount2.getRupee();
// //     int totalPaisa = amount1.getPaisa() + amount2.getPaisa();
// //     if (totalPaisa >= 100) {
// //         totalRupee += totalPaisa / 100;
// //         totalPaisa %= 100;
// //     }
// //     cout << totalRupee <<"."<< totalPaisa <<endl;

// //     return 0;
// // }



// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;
// // double findMedian(vector<vector<int>>& matrix, int rows, int cols) {
// //     int left = matrix[0][0];
// //     int right = matrix[rows - 1][cols - 1];
// //     while (left < right) {
// //         int mid = left + (right - left) / 2;
// //         int count = 0;
// //         for (int i = 0; i < rows; ++i) {
// //             count += std::upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
// //         }
// //         if (count < (rows * cols) / 2 + 1) {
// //             left = mid + 1;
// //         } else {
// //             right = mid;
// //         }
// //     }
// //     return left;
// // }
// // int main() {
// //     int rows, cols;
// //     cin >> rows >> cols;
// //     vector<std::vector<int>> matrix(rows, vector<int>(cols));
// //     for (int i = 0; i < rows; ++i) {
// //         for (int j = 0; j < cols; ++j) {
// //             cin >> matrix[i][j];
// //         }
// //     }
// //     double median = findMedian(matrix, rows, cols);
// //     cout << median << endl;
// //     return 0;
// // }


// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // int countOccurrences(const vector<int>& arr, int target) {
// //     int firstOccurrence = -1;
// //     int lastOccurrence = -1;
// //     int left = 0, right = arr.size() - 1;
// //     while (left <= right) {
// //         int mid = left + (right - left) / 2;
// //         if (arr[mid] == target) {
// //             firstOccurrence = mid;
// //             right = mid - 1;
// //         } else if (arr[mid] < target) {
// //             left = mid + 1;
// //         } else {
// //             right = mid - 1;
// //         }
// //     }
// //     left = 0, right = arr.size() - 1;
// //     while (left <= right) {
// //         int mid = left + (right - left) / 2;
// //         if (arr[mid] == target) {
// //             lastOccurrence = mid;
// //             left = mid + 1;
// //         } else if (arr[mid] < target) {
// //             left = mid + 1;
// //         } else {
// //             right = mid - 1;
// //         }
// //     }
// //     if (firstOccurrence == -1) {
// //         return 0;
// //     }
// //     return lastOccurrence - firstOccurrence + 1;
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> arr(n);
// //     for (int i = 0; i < n; ++i) {
// //         cin >> arr[i];
// //     }
// //     int target;
// //     cin >> target;
// //     int occurrences = countOccurrences(arr, target);
// //     cout << occurrences << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // int findFirstOccurrence(const vector<int>& arr, int target) {
// //     int left = 0, right = arr.size() - 1;
// //     int firstOccurrence = -1;
// //     while (left <= right) {
// //         int mid = left + (right - left) / 2;
// //         if (arr[mid] == target) {
// //             firstOccurrence = mid;
// //             right = mid - 1;
// //         } else if (arr[mid] < target) {
// //             left = mid + 1;
// //         } else {
// //             right = mid - 1;
// //         }
// //     }
// //     return firstOccurrence;
// // }
// // int findLastOccurrence(const vector<int>& arr, int target) {
// //     int left = 0, right = arr.size() - 1;
// //     int lastOccurrence = -1;
// //     while (left <= right) {
// //         int mid = left + (right - left) / 2;
// //         if (arr[mid] == target) {
// //             lastOccurrence = mid;
// //             left = mid + 1;
// //         } else if (arr[mid] < target) {
// //             left = mid + 1;
// //         } else {
// //             right = mid - 1;
// //         }
// //     }
// //     return lastOccurrence;
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> arr(n);
// //     for (int i = 0; i < n; ++i) {
// //         std::cin >> arr[i];
// //     }
// //     int target;
// //     cin >> target;
// //     int firstOccurrence = findFirstOccurrence(arr, target);
// //     int lastOccurrence = findLastOccurrence(arr, target);
// //     if (firstOccurrence == -1) {
// //         cout << "Target value "<<target<<" is not found in the array." << endl;
// //     } else {
// //         cout << "First occurrence index: " << firstOccurrence << endl;
// //         cout << "Last occurrence index: " << lastOccurrence << endl;
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // void insertionSort(int arr[], int n) {
// //     for (int i = 1; i < n; ++i) {
// //         int key = arr[i];
// //         int j = i - 1;
// //         while (j >= 0 && arr[j] > key) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j + 1] = key;
// //     }
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     int registrationNumbers[n];
// //     for (int i = 0; i < n; ++i) {
// //         cin >> registrationNumbers[i];
// //     }
// //     insertionSort(registrationNumbers, n);
// //     for (int i = 0; i < n; ++i) {
// //         cout << registrationNumbers[i] << " ";
// //     }
// //     cout << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // void InsertionSort(int arr[], int n) {
// //    for (int i = 1; i < n; i += 2) {
// //     int key = arr[i];
// //     int j = i - 2;

// //     while (j >= 0 && arr[j] > key) {
// //         arr[j + 2] = arr[j];
// //         j -= 2;
// //     }
// //     arr[j + 2] = key;
// // }
// //   for (int i = n - 2; i >= 0; i -= 2) {
// //     int key = arr[i];
// //     int j = i + 2;

// //     while (j < n && arr[j] > key) {
// //         arr[j - 2] = arr[j];
// //         j += 2;
// //     }
// //     arr[j - 2] = key;
// // }
// // }
// // int main() {
// //     int n;
// //     std::cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n; ++i) {
// //         std::cin >> arr[i];
// //     }
// //     InsertionSort(arr, n); 
// //     for (int i = 0; i < n; ++i) {
// //         std::cout << arr[i] << " ";
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // #include <iomanip> 
// // using namespace std;
// // void bubbleSort(float arr[], int n) {
// //     for (int i = 0; i < n - 1; i++) {
// //         bool swapped = false;
// //         for (int j = 0; j < n - i - 1; j++) {
// //             if (arr[j] > arr[j + 1]) {
// //                 float temp = arr[j];
// //                 arr[j] = arr[j + 1];
// //                 arr[j + 1] = temp;
// //                 swapped = true;
// //             }
// //         }
// //         if(swapped){
// //         cout << "After iteration " << i + 1 << ": ";
// //         for (int k = 0; k < n; k++) {
// //             cout << fixed << setprecision(2) << arr[k] << " ";
// //         }
// //         cout << endl;
// //         }
// //     }
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     float data[n];
// //     for (int i = 0; i < n; i++) {
// //         cin >> data[i];
// //     }
// //     bubbleSort(data, n);
// //     cout << "Sorted array: ";
// //     for (int i = 0; i < n; i++) {
// //         cout << fixed << setprecision(2) << data[i] << " ";
// //     }
// //     cout << endl;
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // void selection(int arr[], int n) {
// //     for (int i = 0; i < n - 1; i++) {
// //         int maxIndex = i;
// //         for (int j = i + 1; j < n; j++) {
// //             if (arr[j] > arr[maxIndex]) {
// //                 maxIndex = j;
// //             }
// //         }
// //         if (maxIndex != i) {
// //             swap(arr[i], arr[maxIndex]);
// //         }
// //     }
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for (int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //     selection(arr, n);
// //     cout << "Sorted array: ";
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
    
// //     cout << "The second largest element is " << arr[1] << endl;
    
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // void displayHeights(int arr[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// // void selectionSort(int arr[], int n) {
// //     for (int i = 0; i < n - 1; i++) {
// //         int minIndex = i;
// //         for (int j = i + 1; j < n; j++) {
// //             if (arr[j] < arr[minIndex]) {
// //                 minIndex = j;
// //             }
// //         }
// //         if (minIndex != i) {
// //             swap(arr[i], arr[minIndex]);
            
// //         }
// //         cout << "Height order of students after iteration " << i + 1 << endl;
// //             displayHeights(arr, n);
// //     }
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the number of students: ";
// //     cin >> n;
    
// //     int heights[n];
// //     cout << "Enter the heights of students: ";
// //     for (int i = 0; i < n; i++) {
// //         cin >> heights[i];
// //     }
    
// //     cout << "Student's height order before sorting:" << endl;
// //     displayHeights(heights, n);
    
// //     selectionSort(heights, n);
    
// //     cout << "After the final comparison of all students, the height order becomes:" << endl;
// //     displayHeights(heights, n);
    
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // void displayHeights(int arr[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// // void insertionSort(int arr[], int n) {
// //     for (int i = 1; i < n; i++) {
// //         int key = arr[i];
// //         int j = i - 1;
// //         while (j >= 0 && arr[j] > key) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }
// //         arr[j + 1] = key;
// //         cout << "Height order of students after iteration " << i << endl;
// //         displayHeights(arr, n);
// //     }
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the number of students: ";
// //     cin >> n;
    
// //     int heights[n];
// //     cout << "Enter the heights of students: ";
// //     for (int i = 0; i < n; i++) {
// //         cin >> heights[i];
// //     }
    
// //     cout << "Student's height order before sorting:" << endl;
// //     displayHeights(heights, n);
    
// //     insertionSort(heights, n);
    
// //     cout << "After the final comparison of all students, the height order becomes:" << endl;
// //     displayHeights(heights, n);
    
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // void displayHeights(int arr[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// // void bubbleSort(int arr[], int n) {
// //     for (int i = 0; i < n - 1; i++) {
// //         for (int j = 0; j < n - i - 1; j++) {
// //             if (arr[j] > arr[j + 1]) {
// //                 swap(arr[j], arr[j + 1]);
// //             }
// //         }
// //         cout << "Height order of students after iteration " << i + 1 << endl;
// //         displayHeights(arr, n);
// //     }
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the number of students: ";
// //     cin >> n;
    
// //     int heights[n];
// //     cout << "Enter the heights of students: ";
// //     for (int i = 0; i < n; i++) {
// //         cin >> heights[i];
// //     }
    
// //     cout << "Student's height order before sorting:" << endl;
// //     displayHeights(heights, n);
    
// //     bubbleSort(heights, n);
    
// //     cout << "After the final comparison of all students, the height order becomes:" << endl;
// //     displayHeights(heights, n);
    
// //     return 0;
// // }


// // #include <iostream>
// // #include<algorithm>
// // using namespace std;
// // void displayHeights(int arr[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }
// // void sortDescending(int arr[], int n) {
// //     sort(arr, arr + n, greater<int>());
// // }

// // void customSort(int arr[], int n) {
// //     for (int i = 0; i < n - 1; i++) {
// //         int minIndex = i;
// //         for (int j = i + 1; j < n; j++) {
// //             if (arr[j] < arr[minIndex]) {
// //                 minIndex = j;
// //             }
// //         }
// //         int minValue = arr[minIndex];
// //         for (int j = minIndex; j > i; j--) {
// //             arr[j] = arr[j - 1];
// //         }
// //         arr[i] = minValue;
// //         cout << "Height order of students after iteration " << i + 1 <<": "<< endl;
// //         displayHeights(arr, n);
// //     }
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     int heights[n];
// //     for (int i = 0; i < n; i++) {
// //         cin >> heights[i];
// //     }
// //     cout << "Student's height order before sorting:";
// //     displayHeights(heights, n);
// //     sortDescending(heights,n);
// //     customSort(heights, n);
// //     cout << "After the final comparison of all students, the height order becomes: ";
// //     displayHeights(heights, n);
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // inline bool IsArmstrong(int number) {
// //     int originalNumber = number;
// //     int sum = 0;
// //     if(number==0){
// //         return true;
// //     }
// //     while (number > 0) {
// //         int digit = number % 10;
// //         sum += digit * digit * digit;
// //         number /= 10;
// //     }
// //     return (sum == originalNumber);
// // }
// // inline void printFactors(int number) {
// //     for (int i = 1; i <= number; i++) {
// //         if (number % i == 0) {
// //             cout << i << " ";
// //         }
// //     }
// //     cout << endl;
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     if (IsArmstrong(n)) {
// //         cout << n << " is an Armstrong number." << endl;
// //         printFactors(n);
// //     } else {
// //         cout << n << " is not an Armstrong number." << endl;
// //     }
// //     return 0;
// // }

// // #include <iostream>
// // #include <cmath>
// // using namespace std;

// // inline bool IsArmstrong(int number) {
// //     int originalNumber = number;
// //     int sum = 0;
// //     int numDigits = 0;
// //     int temp = abs(number);  // Convert to positive for calculation
    
// //     if (number == 0) {
// //         numDigits = 1;  // Special case for 0
// //     } else {
// //         while (temp > 0) {
// //             temp /= 10;
// //             numDigits++;
// //         }
// //     }
    
// //     temp = abs(number);  // Convert to positive for calculation
// //     while (temp > 0) {
// //         int digit = temp % 10;
// //         sum += pow(digit, numDigits);
// //         temp /= 10;
// //     }
    
// //     return sum == abs(originalNumber);
// // }

// // inline void printFactors(int number) {
// //     cout << "Factors of " << number << ": ";
// //     for (int i = 1; i <= abs(number); i++) {
// //         if (number % i == 0) {
// //             cout << i << " ";
// //         }
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     int n;
// //     cout << "Enter a number: ";
// //     cin >> n;

// //     if (IsArmstrong(n)) {
// //         cout << n << " is an Armstrong number." << endl;
// //         printFactors(n);
// //     } else {
// //         cout << n << " is not an Armstrong number." << endl;
// //     }

// //     return 0;
// // }
// // #include <iostream>
// // #include <cmath>
// // using namespace std;

// // inline bool IsArmstrong(int number) {
// //     int originalNumber = number;
// //     int sum = 0;
// //     int numDigits = 0;
// //     int temp = abs(number);  // Convert to positive for calculation
    
// //     if (number == 0) {
// //         numDigits = 1;  // Special case for 0
// //     } else {
// //         numDigits = log10(temp) + 1; // Calculate the number of digits using logarithm
// //     }
    
// //     temp = abs(number);  // Convert to positive for calculation
// //     while (temp > 0) {
// //         int digit = temp % 10;
// //         sum += pow(digit, numDigits);
// //         temp /= 10;
// //     }
    
// //     return sum == abs(originalNumber);
// // }

// // inline void printFactors(int number) {
// //     cout << "Factors of " << number << ": ";
// //     for (int i = 1; i <= abs(number); i++) {
// //         if (number % i == 0) {
// //             cout << i << " ";
// //         }
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     int n;
// //     cout << "Enter a number: ";
// //     cin >> n;

// //     if (IsArmstrong(n)) {
// //         cout << n << " is an Armstrong number." << endl;
// //         printFactors(n);
// //     } else {
// //         cout << n << " is not an Armstrong number." << endl;
// //     }

// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // class Operation {
// // private:
// //     int num1, num2;
// // public:
// //     void get() {
// //         cout << "Enter two numbers: ";
// //         cin >> num1 >> num2;
// //     }
// //     inline void sum() {
// //         cout << "Addition of two numbers: " << num1 + num2 << endl;
// //     }
// //     inline void difference() {
// //         cout << "Difference of two numbers: " << num1 - num2 << endl;
// //     }
// //     inline void product() {
// //         cout << "Product of two numbers: " << num1 * num2 << endl;
// //     }
// //     inline void division() {
// //         if (num2 != 0) {
// //             cout << "Division of two numbers: " << static_cast<int>(num1) / num2 << endl;
// //         } else {
// //             cout << "Division by zero is not allowed." << endl;
// //         }
// //     }
// //     inline void modulus() {
// //         cout << "Modulus of two numbers: " << num1 % num2 << endl;
// //     }
// // };
// // int main() {
// //     Operation operation;
// //     operation.get();
// //     operation.sum();
// //     operation.difference();
// //     operation.product();
// //     operation.division();
// //     operation.modulus();
// //     return 0;
// // }


// // #include <iostream>
// // #include <iomanip>
// // #include <string>
// // using namespace std;
// // int main() {
// //     string message;
// //     cout << "Enter a message: ";
// //     getline(cin, message);
// //     cout << "Reversed message: ";
// //     for (int i = message.length() - 1; i >= 0; i--) {
// //         cout << setw(1) << message[i];
// //     }
// //     cout << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include <iomanip>
// // using namespace std;
// // int main() {
// //     double number;
// //     cin >> number;
// //     cout << scientific << number << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // inline int sumOfSquaresEven(int n) {
// //     int sum = 0;
// //     for (int i = 2; i <= n * 2; i += 2) {
// //         sum += i * i;
// //     }
// //     return sum;
// // }
// // inline int sumOfSquaresOdd(int n) {
// //     int sum = 0;
// //     for (int i = 1; i <= n * 2 - 1; i += 2) {
// //         sum += i * i;
// //     }
// //     return sum;
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     int sumEven = sumOfSquaresEven(n);
// //     int sumOdd = sumOfSquaresOdd(n);
// //     cout << n << sumEven << endl;
// //     cout << n << sumOdd << endl;
// //     return 0;
// // }


// // #include <iostream>
// // #include <string>
// // #include <iomanip>
// // using namespace std;
// // class Car {
// //     string brand;
// //     double fuelConsumption;
// // public:
// //     Car(const string& b, double fc) : brand(b), fuelConsumption(fc) {}
// //     friend double calculateFuelCost(const Car& car, double distance, double fuelPrice);
// // };
// // double calculateFuelCost(const Car& car, double distance, double fuelPrice) {
// //     double fuelNeeded = (car.fuelConsumption / 100.0) * distance;
// //     return fuelNeeded * fuelPrice;
// // }
// // int main() {
// //     string brand;
// //     double fuelConsumption, distance, fuelPrice;
// //     getline(cin, brand);
// //     cin >> fuelConsumption >> distance >> fuelPrice;
// //     Car car(brand, fuelConsumption);
// //     double fuelCost = calculateFuelCost(car, distance, fuelPrice);
// //     cout << fixed << setprecision(2) << fuelCost << endl;
// //     return 0;
// // }


// // #include <iostream>
// // #include <iomanip>
// // using namespace std;
// // float calculateInterest(float principalAmount, float interestRate) {
// //     return principalAmount * interestRate / 100;
// // }
// // float calculateInterest(float principalAmount, float interestRate, int timePeriod) {
// //     return principalAmount * interestRate / 100 * timePeriod;
// // }
// // int main() {
// //     float principalAmount, interestRate;
// //     int timePeriod;
// //     cin >> principalAmount;
// //     cin >> interestRate;
// //     cin >> timePeriod;
// //     float savingsInterest = calculateInterest(principalAmount, interestRate);
// //     float fixedDepositInterest = calculateInterest(principalAmount, interestRate, timePeriod);
// //     cout << fixed << setprecision(2);
// //     cout << savingsInterest << endl;
// //     cout << fixedDepositInterest << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class ComplexNumber {
// //     double real, imaginary;
// // public:
// //     ComplexNumber(double r, double i) : real(r), imaginary(i) {}
// //     friend ComplexNumber multiply(const ComplexNumber& c1, const ComplexNumber& c2) {
// //         double realPart = c1.real * c2.real - c1.imaginary * c2.imaginary;
// //         double imaginaryPart = c1.real * c2.imaginary + c1.imaginary * c2.real;
// //         return ComplexNumber(realPart, imaginaryPart);
// //     }
// //     void display() {
// //         cout << real << " + " << imaginary << "i" << endl;
// //     }
// // };
// // int main() {
// //     double real1, imaginary1, real2, imaginary2;
// //     cin >> real1 >> imaginary1;
// //     cin >> real2 >> imaginary2;
// //     ComplexNumber c1(real1, imaginary1);
// //     ComplexNumber c2(real2, imaginary2);
// //     ComplexNumber result = multiply(c1, c2);
// //     result.display();
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // unsigned long long fibonacci(int num) {
// //     if (num <= 0) {
// //         return 0;
// //     } else if (num == 1 || num == 2) {
// //         return 1;
// //     } else {
// //         return fibonacci(num - 1) + fibonacci(num - 2);
// //     }
// // }
// // int main() {
// //     int n;
// //     cin >> n;
// //     unsigned long long result = fibonacci(n);
// //     cout << result << endl;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // void power(int &base, int exponent) {
// //     int result = 1;
// //     for (int i = 0; i < exponent; i++) {
// //         result *= base;
// //     }
// //     base = result;
// // }
// // int main() {
// //     int base, exponent;
// //     cin >> base>>exponent;
// //     power(base, exponent);
// //     cout << base << endl;
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // void calculateDivisorSum(int num, int &sum) {
// //     sum = 0;
// //     for (int i = 1; i <= num; i++) {
// //         if (num % i == 0) {
// //             sum += i;
// //         }
// //     }
// // }
// // int main() {
// //     int num, sum;
// //     cin >> num;
// //     calculateDivisorSum(num, sum);
// //     cout << sum << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include<cmath>
// // using namespace std;
// // int sumOfPowers(int base, int exponent) {
// //     int result = 0;
// //     for (int i = 0; i <= exponent; i++) {
// //         result += pow(base, i);
// //     }
// //     return result;
// // }
// // void calculateDivisorSum(int num, int &sum) {
// //     sum = 1;
// //     for (int i = 2; i * i <= num; i++) {
// //         if (num % i == 0) {
// //             int exponent = 0;
// //             while (num % i == 0) {
// //                 exponent++;
// //                 num /= i;
// //             }
// //             sum *= sumOfPowers(i, exponent);
// //         }
// //     }
// //     if (num > 1) {
// //         sum *= sumOfPowers(num, 1);
// //     }
// // }
// // int main() {
// //     int num, sum;
// //     cin >> num;
// //     calculateDivisorSum(num, sum);
// //     cout << sum << endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[2][3] = {{1,2,3},{4,5,6}};
// //     int (*ptr)[3] = arr;
// //     cout<<ptr[1][2];
    
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class MyClass{
//     public:
//     int x;
//     MyClass(int value) : x(value) {
//         cout<<"Parameterized constructor called!"<<endl;
//     }

//     ~MyClass(){
//         cout<<"Destructor called!"<<endl;
//     }
// };
// int main(){
//     MyClass obj1(5);
//     cout<<"Hello"<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class abc{
    public:
    int a = 10;
};
int main(){
    abc obj;
    obj.a = -obj.a;
    cout<<obj.a;
    return 0;
}