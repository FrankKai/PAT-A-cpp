#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double mul = 1.0;
  for (int i = 0; i < 3; i++)
  {
    double max = 0.0;
    string symbol = "";
    for (int j = 0; j < 3; j++)
    {
      double num;
      cin >> num;
      if (num >= max)
      {
        max = num;
        if (j == 0)
        {
          symbol = "W";
        }
        else if (j == 1)
        {
          symbol = "T";
        }
        else
        {
          symbol = "L";
        }
      }
    }
    mul *= max;
    cout << symbol << " ";
  }
  double result = (mul * 0.65 - 1) * 2;
  cout << fixed << setprecision(2) << result << endl;
  return 0;
}
