#ifndef OPTIONS_KEYGEN_HH_DEFINED
#define OPTIONS_KEYGEN_HH_DEFINED

#include "options.h"

enum keygen_type
{
    PSEUDO,
    KEYSTROKES
};

class options_keygen : public options
{
    public:
        keygen_type type;
};

#endif