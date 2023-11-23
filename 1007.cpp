// Sample Input:
// 10
// -10 1 2 3 4 -5 -23 3 7 -21
// Sample Output:
// 10 1 4

// 思路
// 从长度2开始找，一直找到n-1
// 找出和最大的子序列，此时记录i和j
// 优先找i小的，因此按照类似选择排序方式的方式找，index从2找到n-1，再从3找到n-1
// 假设所有和都为负数，输出第一个和最后一个，其实就是只比较和为正数的情况

// 3/25

#include <iostream>
#include <vector>

using namespace std;

int subSum(vector<int> &nums, int &start, int &end);

int main()
{
  int n;
  cin >> n;
  vector<int> xvector;
  int maxSum = 0, maxI = 0, maxJ = 0;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    xvector.push_back(num);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 2; j < n; j++)
    {
      int sum = subSum(xvector, i, j);
      if (sum > maxSum)
      {
        maxSum = sum;
        maxI = i;
        maxJ = j;
      }
    }
  }
  cout << maxSum << " " << maxI << " " << maxJ << endl;
  return 0;
}

int subSum(vector<int> &nums, int &start, int &end)
{
  int sum = 0;
  for (int i = start; i <= end; i++)
  {
    sum += nums[i];
  }
  return sum;
}
