#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_FHICL_FHICLJSONDB_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_FHICL_FHICLJSONDB_H_

#include <string>

namespace artdaq {
namespace database {
namespace fhicljson {
bool fhicl_to_json(std::string const&, std::string const&, std::string&);
bool json_to_fhicl(std::string const&, std::string&, std::string&);
namespace debug {
void FhiclJson();
void FCL2JSONDB();
}  // namespace debug
}  // namespace fhicljson

namespace fhicl {
namespace debug {
void FhiclReader();
void FhiclWriter();
}  // namespace debug
}  // namespace fhicl

}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_FHICL_FHICLJSONDB_H_
