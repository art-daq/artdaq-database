#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_FHICL_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_FHICL_H_

#include "artdaq-database/BasicTypes/common.h"

#include <string>

#ifdef TRACE_NAME
#undef TRACE_NAME
#endif

#define TRACE_NAME "data_fhicl.h"

namespace artdaq {
namespace database {
namespace basictypes {

struct JsonData;

struct FhiclData final {
  explicit FhiclData(std::string);

  FhiclData() = default;

  explicit FhiclData(JsonData const&);
  operator JsonData() const;
  operator std::string const&() const;

  static constexpr auto type_version() { return "V100"; }

  std::string fhicl_buffer = "";
  std::string fhicl_file_name = "notprovided";
};

std::istream& operator>>(std::istream&, artdaq::database::basictypes::FhiclData&);
std::ostream& operator<<(std::ostream&, artdaq::database::basictypes::FhiclData const&);

}  // namespace basictypes
}  // namespace database
}  // namespace artdaq

template <>
inline TraceStreamer& TraceStreamer::operator<<(const artdaq::database::basictypes::FhiclData& r) {
  std::ostringstream s;
  s << r;
  msg_append(s.str().c_str());
  return *this;
}

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_BASICTYPES_DATA_FHICL_H_
