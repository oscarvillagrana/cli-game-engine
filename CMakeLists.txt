cmake_minimum_required(VERSION 3.10)
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(main VERSION 1.0)


#TODO: is this next line needed? removing adds warning
#add_subdirectory(src)


add_subdirectory(src/utils)
add_library( utils  src/utils/utils.cpp )


#TODO: is this next line needed? removing adds warning
#target_link_libraries(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/utils)

add_executable( main  ../src/main.cpp )


#-----------
# deprecated
#-----------

#target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#INCLUDE=include/maintest.cpp
#add_executable(tests test.cpp)
#target_link_libraries(main PRIVATE Catch2::Catch2)
#target_link_libraries(main PUBLIC utils)


# Ensures that we do an out of source build

# MACRO(MACRO_ENSURE_OUT_OF_SOURCE_BUILD MSG)
#      STRING(COMPARE EQUAL "${CMAKE_SOURCE_DIR}"
#      "${CMAKE_BINARY_DIR}" insource)
#      GET_FILENAME_COMPONENT(PARENTDIR ${CMAKE_SOURCE_DIR} PATH)
#      STRING(COMPARE EQUAL "${CMAKE_SOURCE_DIR}"
#      "${PARENTDIR}" insourcesubdir)
#     IF(insource OR insourcesubdir)
#         MESSAGE(FATAL_ERROR "${MSG}")
#     ENDIF(insource OR insourcesubdir)
# ENDMACRO(MACRO_ENSURE_OUT_OF_SOURCE_BUILD)
# 
# MACRO_ENSURE_OUT_OF_SOURCE_BUILD(
#     "${CMAKE_PROJECT_NAME} requires an out of source build."
# )
# 