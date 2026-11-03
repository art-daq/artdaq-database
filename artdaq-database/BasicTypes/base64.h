#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_BASE64_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_BASE64_H_

#include <string>

// base64 encode / decode helper functions
std::string base64_encode(unsigned char const*, unsigned int);
std::string base64_encode(std::string const&);
std::string base64_decode(std::string const&);

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_BASE64_H_
