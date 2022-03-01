#include "module_keygen.h"
#include "options_keygen.h"

#include <fstream>
#include <vector>
#include <ctime>

void module_keygen::run(options *opts)
{
    options_keygen *k_opts = (options_keygen*)opts;

    std::ifstream input;
    input.open(k_opts->input_fname);

    if( input.fail() )
    {
        throw std::runtime_error( "Unable to open your input file, make sure file exists" );
    }

    std::vector<char> input_data(
        (std::istreambuf_iterator<char>(input)),
        (std::istreambuf_iterator<char>()));

    std::size_t keylength = input_data.size();
    delete (&input_data);

    std::vector<char> output_data;

    if(k_opts->type == 0)
    {
        for(int i = 0; i < keylength; ++i)
        {
            std::srand(std::time(nullptr));
            output_data.push_back( ( char )( std::rand( ) & 255 ) );
        }
    }
    else if(k_opts->type == 1)
    {
        //generate key based on keystroke times
    }

    std::ofstream output(k_opts->key_fname);

    for(std::size_t i = 0; i < keylength; ++i)
    {
        output << output_data.at(i);
    }
    
    output.close();
}