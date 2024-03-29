#ifndef FLAGS_H
#define FLAGS_H

#include <limits.h>
#include "structures.h"

// define struct for flags, with each flag being a single bit
struct flags_struct {
    unsigned int c_flag : 1;
    unsigned int d_flag : 1;
    unsigned int i_flag : 1;
    unsigned int l_flag : 1;
    unsigned int p_flag : 1;
    char cdi_dir_arg[PATH_MAX+1]; // limiting cgi dir name to PATH_MAX +1
    char addr_arg[IPV6_MAXSTRLEN+1]; // max length of v4 addr mapped to ipv6, +1 for null byte
    char log_file_arg[PATH_MAX+1]; // limiting log file name to PATH_MAX +1
    char working_dir[PATH_MAX+1]; 
    char port_arg[PORT_MAXSTRLEN+1]; // fits strings "0" to 65,535, the max port number
    char argument_path[PATH_MAX+1]; // argument passed into the funciton
    // port_arg needs to be taken as a string, then converted to unsigned short
};

#endif /* FLAGS_H */
