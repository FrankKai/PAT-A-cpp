#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int c;
  c = a + b;
  string sign = "";
  if (c < 0)
  {
    sign = "-";
  }
  int absc = abs(c);
  string str = to_string(absc);
  string result = "";
  int j = 1;
  for (int i = str.size() - 1; i >= 0; i--)
  {
    string cur = string(1, str[i]);
    if (j % 3 == 0 && i != 0)
    {
      result = "," + cur + result;
    }
    else
    {
      result = cur + result;
    }
    j++;
  }
  result = sign + result;
  cout << result << endl;
  return 0;
}
