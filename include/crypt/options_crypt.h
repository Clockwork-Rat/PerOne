#ifndef OPTIONS_CRYPT_HH_DEFINED
#define OPTIONS_CRYPT_HH_DEFINED

#include "options.h"
#include <string>

class options_crypt : public options
{
    public:
        std::string infile_fname;
        std::string outfile_fname;
        std::string key_fname;
        bool encrypt;
};

#endif