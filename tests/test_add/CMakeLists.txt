
add_executable(test_add 
    main.cpp
    ${TEST_SOURCES}
    ${TEST_HEADERS})
target_include_directories(test_add PUBLIC ${TEST_INCLUDE_DIRS})

add_test(test_add, test_add)