# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(test)

add_executable(test_intl test_intl.c)

#if (WIN32)
#find_library(Intl_LIBRARY NAMES libintl intl
#  DOC "libintl libraries (if not in the C library)")
#endif (WIN32)

# find_package(Intl)

#include_directories(${Intl_INCLUDE_DIR})
#target_link_libraries(test_intl ${Intl_LIBRARIES})


# if (WIN32)
# add_executable(test_intlw WIN32 test_intlw.c test_intl.c unicode.c whereami.c)
# if (Intl_FOUND)
#target_compile_definitions (echeckw PRIVATE HAVE_GETTEXT=1)
#target_link_libraries(echeckw ${Intl_LIBRARIES})
# endif (Intl_FOUND)

# endif(WIN32)
