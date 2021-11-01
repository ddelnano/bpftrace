add_library(cxxdemangler_stdlib STATIC cxxdemangler_stdlib.cpp)
add_library(cxxdemangler_llvm STATIC cxxdemangler_llvm.cpp)

install(TARGETS cxxdemangler_stdlib cxxdemangler_llvm ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
