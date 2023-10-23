project(test)
add_subdirectory(lib)


# adding the Google_Tests_run target
add_executable(Google_Tests_run
        ConverterTests.cpp
        AbsoluteDateTest.cpp
        HumanTest.cpp
        Fly.cpp
)

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(Google_Tests_run module)

target_link_libraries(Google_Tests_run gtest gtest_main)