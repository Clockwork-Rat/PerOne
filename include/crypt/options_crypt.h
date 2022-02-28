#ifndef OPTIONS_CRYPT_HH_DEFINED
#define OPTIONS_CRYPT_HH_DEFINED

#include "options.h"

class options_crypt : public options
{
    public:
        std::string infile_fname;
        std::string outfile_fname;
        bool encrypt;
};

#endif