
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;
namespace sol359
{
    class Logger
    {
    private:
        unordered_map<string, int> tsmsgs;

    public:
        bool shouldPrint(int ts, string msg);
    };
}
#endif