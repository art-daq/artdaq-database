// Built when WITH_MONGODB=OFF: every MongoDB dispatch entry point reports that
// this build has no MongoDB support, so the provider table still links.
#include "artdaq-database/ConfigurationDB/common.h"
#include "artdaq-database/ConfigurationDB/dispatch_mongodb.h"
#include "artdaq-database/JsonDocument/JSONDocument.h"
#include "artdaq-database/SharedCommon/shared_exceptions.h"

namespace cf = artdaq::database::configuration;
namespace prov = artdaq::database::configuration::mongo;
using artdaq::database::docrecord::JSONDocument;

namespace {
[[noreturn]] void unsupported(const char* fn) {
  throw artdaq::database::runtime_error(fn) << "artdaq-database was built without MongoDB support (WITH_MONGODB=OFF).";
}
}  // namespace

void prov::writeDocument(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("writeDocument"); }
JSONDocument prov::readDocument(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("readDocument"); }
std::vector<JSONDocument> prov::readDocuments(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("readDocuments"); }
JSONDocument prov::markDocumentReadonly(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("markDocumentReadonly"); }
JSONDocument prov::markDocumentDeleted(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("markDocumentDeleted"); }
std::vector<JSONDocument> prov::findVersions(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("findVersions"); }
std::vector<JSONDocument> prov::findEntities(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("findEntities"); }
JSONDocument prov::addEntity(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("addEntity"); }
JSONDocument prov::removeEntity(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("removeEntity"); }
JSONDocument prov::addVersionAlias(cf::ManageAliasesOperation const&, JSONDocument const&) { unsupported("addVersionAlias"); }
JSONDocument prov::removeVersionAlias(cf::ManageAliasesOperation const&, JSONDocument const&) { unsupported("removeVersionAlias"); }
std::vector<JSONDocument> prov::findVersionAliases(cf::ManageAliasesOperation const&, JSONDocument const&) { unsupported("findVersionAliases"); }
JSONDocument prov::addConfigurationAlias(cf::ManageAliasesOperation const&, JSONDocument const&) { unsupported("addConfigurationAlias"); }
JSONDocument prov::removeConfigurationAlias(cf::ManageAliasesOperation const&, JSONDocument const&) { unsupported("removeConfigurationAlias"); }
std::vector<JSONDocument> prov::findConfigurations(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("findConfigurations"); }
std::vector<JSONDocument> prov::findCompositionsContaining(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("findCompositionsContaining"); }
JSONDocument prov::configurationComposition(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("configurationComposition"); }
JSONDocument prov::assignConfiguration(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("assignConfiguration"); }
JSONDocument prov::removeConfiguration(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("removeConfiguration"); }
std::vector<JSONDocument> prov::searchCollection(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("searchCollection"); }
std::vector<JSONDocument> prov::listCollections(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("listCollections"); }
std::vector<JSONDocument> prov::listDatabases(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("listDatabases"); }
JSONDocument prov::readDbInfo(cf::ManageDocumentOperation const&, JSONDocument const&) { unsupported("readDbInfo"); }

void cf::debug::MongoDB() {}
