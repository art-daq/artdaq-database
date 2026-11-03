#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_STORAGEPROVIDERS_MONGODB_PROVIDER_MONGODB_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_STORAGEPROVIDERS_MONGODB_PROVIDER_MONGODB_H_

#include "artdaq-database/StorageProviders/storage_providers.h"

#include <memory>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <string>

namespace artdaq {
namespace database {
namespace mongo {
namespace debug {
void enable();
void connection();
void ReadWrite();
}  // namespace debug

namespace literal {
constexpr auto MONGOURI = "mongodb://";
constexpr auto hostname = "127.0.0.1";
constexpr auto port = 27017;
constexpr auto db_name = "test_configuration_db";
}  // namespace literal

struct DBConfig final {
  DBConfig();
  DBConfig(const std::string& uri_);

  std::string uri;
  const std::string connectionURI() const { return uri; };
};

class MongoDB final {
 public:
  static std::shared_ptr<MongoDB> create(DBConfig const& config);

  class PassKeyIdiom final {
   private:
    friend std::shared_ptr<MongoDB> MongoDB::create(DBConfig const&);
    PassKeyIdiom() = default;
  };

  explicit MongoDB(DBConfig config, PassKeyIdiom const&);

  mongocxx::database& connection();
  mongocxx::cursor list_databases();

 private:
  DBConfig _config;
  mongocxx::instance& _instance;
  mongocxx::client _client;
  mongocxx::database _connection;
};

using artdaq::database::StorageProvider;

template <typename TYPE>
using MongoDBProvider = StorageProvider<TYPE, MongoDB>;

template <typename TYPE>
using DBProvider = MongoDBProvider<TYPE>;

using DB = MongoDB;

}  // namespace mongo
}  // namespace database
}  // namespace artdaq

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_STORAGEPROVIDERS_MONGODB_PROVIDER_MONGODB_H_
