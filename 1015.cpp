// 12/20

// 判断素数
// 进制转换
// 反转数字

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool checkPrime(int num);
int transformToDigital(int num, int radix);
int reversePrimeNum(int num);

int main()
{
  // bool flag = true;
  int a, b;
  while (true)
  {
    cin >> a;
    if (a < 0)
    {
      // flag = false;
      break;
    }
    cin >> b;
    bool isAPrime = false;
    int digitalNum = a;
    if (b == 10)
    {
      isAPrime = checkPrime(a);
    }
    else
    {
      digitalNum = transformToDigital(a, b);
      isAPrime = checkPrime(digitalNum);
    }
    if (!isAPrime)
    {
      cout << "No" << endl;
    }
    else
    {
      int reverseNum = reversePrimeNum(digitalNum);
      bool isReversePrime = checkPrime(reverseNum);
      if (isReversePrime)
      {
        cout << "Yes" << endl;
      }
      else
      {

        cout << "No" << endl;
      }
    }
  }
  return 0;
}

bool checkPrime(int num)
{
  if (num < 2)
    return false;
  bool isPrime = true;
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int transformToDigital(int num, int radix)
{
  string str = to_string(num);
  int j = 0;
  int result = 0;
  for (int i = str.size() - 1; i >= 0; i--)
  {
    result += stoi(string(1, str[i])) * pow(radix, j);
    j++;
  }
  // cout << "transformToDigital:::" << result << endl;
  int iresult = static_cast<int>(result);
  return iresult;
}

int reversePrimeNum(int num)
{
  string str = to_string(num);
  string result = "";
  for (char item : str)
  {
    result = string(1, item) + result;
  }
  int iresult = stoi(result);
  return iresult;
}
