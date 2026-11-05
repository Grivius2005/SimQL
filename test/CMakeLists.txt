include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# Opcja zapobiegająca nadpisywaniu ustawień kompilacji przez gtest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests
        test.cpp
)

# Linkowanie Twojego kodu oraz biblioteki GTest
target_link_libraries(unit_tests
        PRIVATE
        GTest::gtest_main
)


# Integracja z systemem testowym CMake (pozwala uruchamiać przez `ctest`)
include(GoogleTest)
gtest_discover_tests(unit_tests)