// 上楼6秒 下楼4秒
// 停下时停顿5秒
// 不需要返回1楼
// 相等时注意需要挺5秒
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int result = 0;
  int cur = 0; // 最初是在0层
  for (int i = 0; i < n; i++)
  {
    int floor;
    cin >> floor;
    // 上楼 + 停顿
    if (floor > cur)
    {
      int num = floor - cur;
      result += num * 6;
      result += 5;
    }
    // 下楼 + 停顿
    else if (floor < cur)
    {
      int num = cur - floor;
      result += num * 4;
      result += 5;
    }
    else
    {
      result += 5;
    }
    cur = floor;
  }
  cout << result << endl;
  return 0;
}
