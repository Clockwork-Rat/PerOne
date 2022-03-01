#ifndef OPTIONS_PARSER_CRYPT_HH_INCLUDED
#define OPTIONS_PARSER_CRYPT_HH_INCLUDED

#include "options_parser.h"
#include <boost/program_options.hpp>

class options_parser_crypt : public options_parser
{
    public:
        bool parse(options *opts, char ***argv, int arc);
};

#endif