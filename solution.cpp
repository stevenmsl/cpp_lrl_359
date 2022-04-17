#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
using namespace sol359;
using namespace std;

/*takeaways
  - create a map to set a timer for each
    incoming string
  - return false if the timer has not expired
    yet
*/
bool Logger::shouldPrint(int ts, string msg)
{
  /*
    - if this message has not existed in the
      map a new entry for it will be created
      with a timer set to 0 meaning it has
      expired
    - this will give us the behavior
      of returning true if we never have tried
      to print this message before

  */
  if (ts < tsmsgs[msg])
    return false;
  /* set the timer to be expired 10 seconds from ts */
  tsmsgs[msg] = ts + 10;
  return true;
}