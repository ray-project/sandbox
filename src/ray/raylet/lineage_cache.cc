#ifndef LINEAGE_CACHE_CC
#define LINEAGE_CACHE_CC

#include "lineage_cache.h"

#include <stdexcept>

namespace ray {

LineageCache::LineageCache() {}

ray::Status LineageCache::AddTask(const Task &task) {
  throw std::runtime_error("method not implemented");
  return ray::Status::OK();
}

ray::Status LineageCache::AddTask(const Task &task,
                                  const Lineage &uncommitted_lineage) {
  throw std::runtime_error("method not implemented");
  return ray::Status::OK();
}

ray::Status LineageCache::AddObjectLocation(const ObjectID &object_id) {
  throw std::runtime_error("method not implemented");
  return ray::Status::OK();
}

Lineage &LineageCache::GetUncommittedLineage(const ObjectID &object_id) {
  throw std::runtime_error("method not implemented");
}

Status LineageCache::Flush() {
  throw std::runtime_error("method not implemented");
  return ray::Status::OK();
}

} // namespace ray

#endif // LINEAGE_CACHE_CC
