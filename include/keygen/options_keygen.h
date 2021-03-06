#ifndef OPTIONS_KEYGEN_HH_DEFINED
#define OPTIONS_KEYGEN_HH_DEFINED

#include "options.h"
#include <string>

enum keygen_type
{
    PSEUDO,
    KEYSTROKES
};

class options_keygen : public options
{
    public:
        keygen_type type;
        std::string input_fname;
        std::string key_fname;
};

#endif