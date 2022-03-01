#ifndef OPTIONS_PARSER_KEYGEN_HH_INCLUDED
#define OPTIONS_PARSER_KEYGEN_HH_INCLUDED

#include "options_parser.h"

class options_parser_keygen : public options_parser
{
    public:
        void parse(options *opts);
};

#endif