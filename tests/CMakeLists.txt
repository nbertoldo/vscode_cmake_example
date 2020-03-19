
set(TEST_SOURCES 
    ${PROJECT_DIR}/src/MultiplyClass.cpp 
    ${PROJECT_DIR}/src/AddClass.cpp 
    ${PROJECT_DIR}/tests/checker.cpp
    )

set(TEST_HEADERS 
    ${PROJECT_DIR}/src/MultiplyClass.hpp 
    ${PROJECT_DIR}/src/MultiplyClass.hpp 
    ${PROJECT_DIR}/tests/checker.hpp)

set(TEST_INCLUDE_DIRS ${PROJECT_DIR}/src ${PROJECT_DIR}/tests)

message("Tests sources: ${TEST_SOURCES}")
message("Tests headers: ${TEST_HEADERS}")
message("Tests include dirs: ${TEST_INCLUDE_DIRS}")

add_subdirectory(test_add)
add_subdirectory(test_multiply)