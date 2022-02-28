#ifndef MODULE_CRYPT_HH_DEFINED
#define MODULE_CRYPT_HH_DEFINED

#include "module.h"
#include "options_crypt.h"

class module_crypt
{
    public:
        void run(options *opts);
        std::string name;
};

#endif