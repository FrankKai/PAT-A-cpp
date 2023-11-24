#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int repeat;
  cin >> repeat;
  vector<int> xvector;
  vector<string> vvector = {
      "S1",
      "S2",
      "S3",
      "S4",
      "S5",
      "S6",
      "S7",
      "S8",
      "S9",
      "S10",
      "S11",
      "S12",
      "S13",
      "H1",
      "H2",
      "H3",
      "H4",
      "H5",
      "H6",
      "H7",
      "H8",
      "H9",
      "H10",
      "H11",
      "H12",
      "H13",
      "C1",
      "C2",
      "C3",
      "C4",
      "C5",
      "C6",
      "C7",
      "C8",
      "C9",
      "C10",
      "C11",
      "C12",
      "C13",
      "D1",
      "D2",
      "D3",
      "D4",
      "D5",
      "D6",
      "D7",
      "D8",
      "D9",
      "D10",
      "D11",
      "D12",
      "D13",
      "J1",
      "J2"};
  int num;
  while (cin >> num)
  {
    xvector.push_back(num - 1);
    char next = cin.get();
    if (next == '\n')
    {
      break;
    }
  }
  vector<string> yvector(xvector.size());
  for (int i = 0; i < repeat; i++)
  {
    for (int j = 0; j < xvector.size(); j++)
    {
      yvector[xvector[j]] = vvector[j];
    }
    vvector = yvector;
  }
  int i = 0;
  for (string item : yvector)
  {
    if (i == yvector.size() - 1)
    {
      cout << item << endl;
    }
    else
    {
      cout << item << " ";
    }
    i++;
  }
  return 0;
}
