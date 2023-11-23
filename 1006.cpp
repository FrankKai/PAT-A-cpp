#include <iostream>
#include <string>

using namespace std;

int transformTime(string time);

int main()
{
  int m;
  cin >> m;
  string locked = "";
  int lockedTime = 0;
  string unlocked = "";
  int unlockedTime = 24 * 60 * 60 + 1;
  for (int i = 0; i < m; i++)
  {
    string id, signIn, signOut;
    cin >> id >> signIn >> signOut;
    int signInTime = transformTime(signIn);
    int signOutTime = transformTime(signOut);
    if (signInTime < unlockedTime)
    {
      unlockedTime = signInTime;
      unlocked = id;
    }
    if (signOutTime > lockedTime)
    {
      lockedTime = signOutTime;
      locked = id;
    }
  }
  cout << unlocked << " " << locked << endl;
  return 0;
}

int transformTime(string time)
{
  int hour = stoi(time.substr(0, 2));
  int minute = stoi(time.substr(3, 2));
  int second = stoi(time.substr(6, 2));
  int result = hour * 60 * 60 + minute * 60 + second;
  return result;
}
