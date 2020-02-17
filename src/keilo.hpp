#pragma once

#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <mutex>
#include <string>
#ifdef _WIN32
#include <filesystem>
#elif __linux__ || __APPLE__
#include <experimental/filesystem>
#endif
#include <sstream>

namespace keilo {
enum class result_t {
  success = 0,
  fail,
  has_no_value,
  cannot_find,
  already_exist,
  key_overlapped,
  key_not_exist,
  file_not_support
};
}  // namespace keilo

#include "database.hpp"
#include "instance.hpp"
#include "json.hpp"
#include "record.hpp"
#include "table.hpp"
