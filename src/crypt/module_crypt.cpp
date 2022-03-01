#include "module_crypt.h"
#include "options_crypt.h"
#include <vector>
#include <iostream>
#include <fstream>

void module_crypt::run(options *opts)
{
    //typedef unsigned char byte;

    options_crypt *c_opts = (options_crypt*)opts;

    std::ifstream input;
    input.open(c_opts->infile_fname);

    if( input.fail() )
    {
        throw std::runtime_error( "Unable to open your input file, make sure file exists" );
    }

    std::vector<char> input_data(
        (std::istreambuf_iterator<char>(input)),
        (std::istreambuf_iterator<char>()));

    input.close();

    input.open( c_opts->key_fname );

    if( input.fail() )
    {
        throw std::runtime_error( "Unable to open your key file, please make sure it exists" );
    }

    std::vector<char> key_data(
            (std::istreambuf_iterator<char>(input)),
            (std::istreambuf_iterator<char>()));

    std::ofstream output( c_opts->outfile_fname );

    for( std::size_t i = 0; i < input_data.size(); ++i)
    {
        output << (char) ((int)input_data.at(i) ^ (int)key_data.at(i));
    }

    output.close();
}