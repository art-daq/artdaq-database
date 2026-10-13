#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONFJSONDB_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONFJSONDB_H_

#include <string>

namespace artdaq {
namespace database {

namespace confjson {
bool conf_to_json(std::string const&, std::string&);
bool json_to_conf(std::string const&, std::string&);
namespace debug {
void enableConfJson();
}
}  // namespace confjson

namespace conf {
namespace debug {
void ConfReader();
void ConfWriter();
}  // namespace debug
}  // namespace conf

}  // namespace database
}  // namespace artdaq
#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_DATAFORMATS_CONF_CONFJSONDB_H_
