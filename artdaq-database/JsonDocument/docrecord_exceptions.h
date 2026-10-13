#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_JSONDOCUMENT_DOCRECORD_EXCEPTIONS_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_JSONDOCUMENT_DOCRECORD_EXCEPTIONS_H_

#include "artdaq-database/SharedCommon/shared_exceptions.h"

#include <string>

namespace artdaq {
namespace database {
namespace docrecord {
using artdaq::database::exception;

class notfound_exception : public exception {
 public:
  explicit notfound_exception(std::string const& category_) : exception(category_) {}
};

class readonly_exception : public exception {
 public:
  explicit readonly_exception(std::string const& category_) : exception(category_) {}
};

}  // namespace docrecord
}  // namespace database
}  // namespace artdaq

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_JSONDOCUMENT_DOCRECORD_EXCEPTIONS_H_
