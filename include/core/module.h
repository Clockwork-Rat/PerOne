#ifndef MODULE_HH_DEFINED
#define MODULE_HH_DEFINED

#include "options.h"
#include <string>

class module
{
public:
  void run(options* opts);
  std::string name;
};

#endif
