#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_BUILDINFO_GETPACKAGEBUILDINFO_HH_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_BUILDINFO_GETPACKAGEBUILDINFO_HH_

#include "artdaq-core/Data/PackageBuildInfo.hh"

#include <string>

/**
 * \brief Namespace used to differentiate the artdaq_database version of GetPackageBuildInfo
 * from other versions present in the system.
 */
namespace artdaqdatabase {

/**
 * \brief Wrapper around the artdaqdatabase::GetPackageBuildInfo::getPackageBuildInfo function
 */
struct GetPackageBuildInfo {
  /**
   * \brief Gets the version number and build timestmap for artdaq_database
   * \return An artdaq::PackageBuildInfo object containing the version number and build timestamp for artdaq_database
   */
  static artdaq::PackageBuildInfo getPackageBuildInfo();
};
}  // namespace artdaqdatabase

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_BUILDINFO_GETPACKAGEBUILDINFO_HH_
