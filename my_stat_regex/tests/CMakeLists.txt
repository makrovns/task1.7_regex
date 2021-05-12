# задаем набор исходников
set(SOURCES
    tests.cpp
)

# создаем исполняемый файл
add_executable(my_stat_regex_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(my_stat_regex_test PUBLIC stat_regex_lib)
target_link_libraries(my_stat_regex_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/mywread_test
set_property(TARGET my_stat_regex_test PROPERTY FOLDER "tests/my_stat_regex_test")