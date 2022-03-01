#ifndef OPTIONS_PARSER_HH_INCLUDED
#define OPTIONS_PARSER_HH_INCLUDED

#include "options.h"

class options_parser
{
    public:
        bool parse(options *opts, char ***argv, int arc);
};

#endif