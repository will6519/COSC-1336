#include <iostream>

int main ()
{
    int val1, val2, largest, small;
 std::cout << "enter valu 1 and 2 " << endl;
 cin >> val1 >> val2;
 if (val1>val2)
 {
 std::cout << "largest is" << val1 << endl;
 small = val2;
 largest = val1;
 }
 {
 std::cout << "largest is" << val2 << endl;
 largest = val2;
 small = val1;
 }
 int sum, different, product, ratio;
 sum = val1 + val2;
 different = largest - small;
 product = val1*val2;
 ratio = largest / small;
 std::cout << "the sum is" << sum << endl;
 std::cout << "the different is" << different << endl;
 std::cout << "the product is" << product << endl;
 std::cout << "the ratio is" << ratio << endl;
 return 0;
}