cmake_minimum_required(VERSION 3.23.1 FATAL_ERROR)
project(OpenIW LANGUAGES CXX)

option(CMAKE_SUBMODULES "Initialize submodules in the repository." ON)
option(CMAKE_VCXPROJ_FILTERS "Initialize vcxproj.filters in the solution." ON)

# Initialize submodules in the repository.
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
  if(CMAKE_SUBMODULES)
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} RESULT_VARIABLE RESULT)
    if(NOT RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules.")
    endif()
  endif()
endif()

# Initialize vcxproj.filters in the solution.
function(target_vcxproj_filters target)
  if(CMAKE_VCXPROJ_FILTERS)
    get_target_property(sources "${target}" SOURCES)
    foreach(filename IN LISTS sources)
      get_filename_component(path "${filename}" PATH)
      string(REPLACE "/" "\\" group "${path}")
      source_group("${group}" FILES "${filename}")
    endforeach()
  endif()
endfunction()

# Disable in-source builds.
if ("${CMAKE_BINARY_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}")
  message(FATAL_ERROR "In-source builds are disabled. Please create a build subdirectory and use `cmake ..` inside it.\n" "NOTE: You must delete both CMakeCache.txt and CMakeFiles/* before continuing.")
endif()

add_subdirectory(externals)
add_subdirectory(src)
