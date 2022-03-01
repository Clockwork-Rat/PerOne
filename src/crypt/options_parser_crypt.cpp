#include "options_parser_crypt.h"
#include "options.h"
#include "options_crypt.h"
#include <stdexcept>
#include <iostream>

bool options_parser_crypt::parse(options *opts, char ***argv, int argc)
{
    options_crypt *c_opts = (options_crypt*)opts;

    namespace po = boost::program_options;
    po::variables_map vm;

    //issue: add permanent line width
    po::options_description desc( "PerOne", 200 );

    desc.add_options()
        ( "help,h", "produce help message and exit" )
        ( "input_file,i",
            po::value<std::string>( &c_opts->infile_fname )->required(),
            "Input file name" 
            )
        ( "output_file,o", 
            po::value<std::string>( &c_opts->outfile_fname )->required(),
            "Output file name"
            )
        ( "key_file,k",
            po::value<std::string>( &c_opts->key_fname )->required(),
            "Key file name"
            )
        ( "encrypt,e",
            po::value<bool>( &c_opts->encrypt )->default_value(false),
            "include if file is being encrypted, do not if file is being decrypted"
            );

        po::store( po::command_line_parser( argc, *argv ).options( desc ).allow_unregistered().run(), vm );

        if( vm.count( "help" ) 
            || argc == 2
            )
        {
            std::cout << desc << std::endl;
            return false;
        }
        else
        {
            po::notify( vm );
            return true;
        }
}