#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = []() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  return NULL;
}();

class Solution {
public:
  // alternative is to sort and test numbers next to each other
  // set is easy, but wastes some space
  vector<string> summaryRanges(vector<int> &nums) {}
};

void test1() {}

void test2() { Solution S; }

void test3() { Solution S; }

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;

  return 0;
}