#include <iostream>
#include <map>

using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  int half = m * n / 2;
  map<int, int> xmap;
  bool flag = false;
  int result;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int num;
      cin >> num;
      xmap[num] = xmap.count(num) ? ++xmap[num] : 1;
      if (xmap[num] > half)
      {
        flag = true;
        result= num;
        break;
      }
    }
    if (flag)
    {
      break;
    }
  }
  cout << result << endl;
  return 0;
}
