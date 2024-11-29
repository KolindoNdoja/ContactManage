# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ContactManage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ContactManage_autogen.dir\\ParseCache.txt"
  "ContactManage_autogen"
  )
endif()
