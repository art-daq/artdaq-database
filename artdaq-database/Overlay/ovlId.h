#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_OVERLAY_OVLID_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_OVERLAY_OVLID_H_

#include "artdaq-database/Overlay/common.h"
#include "artdaq-database/Overlay/ovlKeyValue.h"

#include <memory>
#include <string>

namespace artdaq {
namespace database {
namespace overlay {
namespace jsonliteral = artdaq::database::dataformats::literal;
using namespace artdaq::database::result;

class ovlId final : public ovlKeyValue {
 public:
  ovlId(object_t::key_type const& /*key*/, value_t& /*oid*/);

  bool newId();
  // defaults
  ovlId(ovlId&&) = default;
  ~ovlId() = default;

  // accessors
  std::string& oid();
  std::string& oid(std::string const& /*id*/);

  // ops
  result_t operator==(ovlId const&) const;

 private:
  bool init(value_t& /*parent*/);

 private:
  bool _initOK;
};

using ovlIdUPtr_t = std::unique_ptr<ovlId>;
}  // namespace overlay
}  // namespace database
}  // namespace artdaq

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_OVERLAY_OVLID_H_
