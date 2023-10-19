#include <iostream>
#include <string>

using namespace std;

const string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
  string str;
  cin >> str;
  long long int sum;
  for (char c : str)
  {
    sum += stoi(string(1, c));
  }
  string sumStr = to_string(sum);
  for (int i = 0; i < sumStr.length(); i++)
  {
    int idx = stoi(string(1, sumStr[i]));
    if (i == sumStr.length() - 1)
    {
      cout << nums[idx] << endl;
    }
    else
    {
      cout << nums[idx] << " ";
    }
  }
  return 0;
}
