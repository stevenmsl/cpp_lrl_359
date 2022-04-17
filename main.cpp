#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol359;

/*
  Logger logger = new Logger();

// logging string "foo" at timestamp 1
logger.shouldPrintMessage(1, "foo"); returns true;

// logging string "bar" at timestamp 2
logger.shouldPrintMessage(2,"bar"); returns true;

// logging string "foo" at timestamp 3
logger.shouldPrintMessage(3,"foo"); returns false;

// logging string "bar" at timestamp 8
logger.shouldPrintMessage(8,"bar"); returns false;

// logging string "foo" at timestamp 10
logger.shouldPrintMessage(10,"foo"); returns false;

// logging string "foo" at timestamp 11
logger.shouldPrintMessage(11,"foo"); returns true;
*/
tuple<vector<tuple<int, string, bool>>> testFixture1()
{
  auto inputOuput = vector<tuple<int, string, bool>>{
      {1, "foo", true},
      {2, "bar", true},
      {3, "foo", false},
      {8, "bar", false},
      {10, "foo", false},
      {11, "foo", true},
  };

  return make_tuple(inputOuput);
}

void test1()
{
  auto f = testFixture1();
  auto tests = get<0>(f);
  Logger sol;

  for (auto &[ts, msg, result] : tests)
  {
    cout << "Expect to see: " << to_string(result) << endl;
    cout << "Result: " << to_string(sol.shouldPrint(ts, msg)) << endl;
  }
}

main()
{
  test1();
  return 0;
}