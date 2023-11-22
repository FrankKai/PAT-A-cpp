#include <iostream>

using namespace std;
string transformToRadix(int num);

int main()
{
  int r, g, b;
  cin >> r >> g >> b;
  string sr = transformToRadix(r);
  string gr = transformToRadix(g);
  string br = transformToRadix(b);
  string result = "#" + sr + gr + br;
  cout << result << endl;
  return 0;
}

string transformToRadix(int num)
{
  string result = "";
  while (num > 0)
  {
    int rest = num % 13;
    string restStr = to_string(rest);
    if (rest == 10)
    {
      restStr = "A";
    }
    else if (rest == 11)
    {
      restStr = "B";
    }
    else if (rest == 12)
    {
      restStr = "C";
    }
    result = restStr + result;
    num = num / 13;
  }
  if (result.size() == 0)
  {
    result = "00";
  }
  else if (result.size() == 1)
  {
    result = "0" + result;
  }
  return result;
}
