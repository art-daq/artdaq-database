#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_DBOPERATION_SEARCHCOLLECTION_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_DBOPERATION_SEARCHCOLLECTION_H_

#include "artdaq-database/SharedCommon/returned_result.h"

#include <string>

namespace artdaq {
namespace database {
namespace configuration {
class ManageDocumentOperation;

using artdaq::database::result_t;

namespace opts {
using artdaq::database::configuration::ManageDocumentOperation;
result_t search_collection(ManageDocumentOperation const& /*options*/, std::string& /*rusults*/) noexcept;
}  // namespace opts

namespace json {
result_t search_collection(std::string const& /*task_payload*/) noexcept;
}  // namespace json

namespace debug {
void SearchCollection();
namespace detail {
void SearchCollection();
}
}  // namespace debug

}  // namespace configuration
}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_CONFIGURATIONDB_DBOPERATION_SEARCHCOLLECTION_H_
