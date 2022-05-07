cmake_minimum_required(VERSION 3.23.1 FATAL_ERROR)
project(OpenIW LANGUAGES CXX)

option(CMAKE_SUBMODULES "Automatically initialize and update each submodule in the repository." ON)
option(CMAKE_VCXPROJ_FILTERS "Automatically initialize and create vcxproj.filters files in the repository." ON)
set   (CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Steam/steamapps/common/Call of Duty Modern Warfare 2" CACHE PATH "Install directory used by OpenIW." FORCE)

# Automatically initialize and update each submodule in the repository.
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
  if(CMAKE_SUBMODULES)
    message(STATUS "Running git submodule update --init --recursive, please wait.")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} RESULT_VARIABLE RESULT)
    if(NOT RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules.")
    endif()
  endif()
endif()

# Automatically initialize and create vcxproj.filters files in the repository.
function(target_create_vcxproj_filters target_name)
  if(CMAKE_VCXPROJ_FILTERS)
    message(STATUS "Creating vcxproj.filters files, please wait.")
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    get_target_property(target_sources  "${target_name}" SOURCES)
    foreach(file_name IN LISTS target_sources)
      get_filename_component(dir_name "${file_name}" PATH)
      string(REPLACE "/" "\\" group_name "${dir_name}")
      source_group("${group_name}" FILES "${file_name}")
    endforeach()
  endif()
endfunction()

# Disable in-source builds to avoid cluttering the source tree with generated CMake files.
if ("${CMAKE_BINARY_DIR}" STREQUAL "${CMAKE_SOURCE_DIR}")
  message(FATAL_ERROR "In-source builds are disabled to avoid cluttering the source tree with generated CMake files. Please create a build subdirectory and use `cmake ..` inside it.\n" "NOTE: You must delete both CMakeCache.txt and CMakeFiles/* before continuing.")
endif()

# Automated dependency handling with FetchContent
include(FetchContent)
FetchContent_Declare(zynamic
  GIT_REPOSITORY https://github.com/OpenIW/zynamic.git
  GIT_TAG main
)

add_subdirectory(src)
