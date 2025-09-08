//======================первое задание========================
//#include <iostream>
//using namespace std;
//int main() {
//    int number = 100;
//    int count = 0;
//    while (number <= 999) {
//        int a = number / 100;
//        int b = (number / 10) % 10;
//        int c = number % 10;
//        if (a == b || a == c || b == c) {
//            count++;
//        }
//        number++;
//    }
//    cout << "Number of numbers with two identical digits: " << count << "\n";
//    return 0;
//}

//======================второе задание========================
//#include <iostream>
//using namespace std;
//int main() {
//    int number = 100;
//    int count = 0;
//    while (number <= 999) {
//        int a = number / 100;
//        int b = (number / 10) % 10;
//        int c = number % 10;
//        if (a != b && a != c && b != c) {
//            count++;
//        }
//        number++;
//    }
//    cout << "Number of numbers in which all digits are different :  " << count << "\n";
//    return 0;
//}

//======================четвертое задание========================
//#include <iostream>
//using namespace std;
//
//int main() {
//    int numA;
//    cout << "Number: ";
//    cin >> numA;  
//    for (int B = 1; B <= abs(numA); B++) {
//        int sq = B * B;
//        int sq_B = B * B * B;
//        if (numA % sq == 0 && numA % sq_B != 0) {
//            cout << B << " ";
//        }
//    }
//    return 0;
//}

//========================шестое задание=========================
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    int numA;
//    cin >> numA;
//    cout << "Divisors of a number " << numA << ": ";
//    for (int i = 1; i <= abs(numA); i++) {
//        if (numA % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}

//======================седьмое задание========================
//#include <iostream>
//using namespace std;
//int main() {
//    int numA, B;
//    cout << "Two numbers : ";
//    cin >> numA >> B;
//    if (numA < 0) numA = -numA;
//    if (B < 0) B = -B;
//    int limit;
//    if (numA < B) limit = numA;
//    else limit = B;
//    cout << "Common factors: ";
//    int i = 1;
//    while (i <= limit) {
//        if (numA % i == 0 && B % i == 0) {
//            cout << i << " ";
//        }
//        i++;
//    }
//    cout << endl;
//    return 0;
//}



