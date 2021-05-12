# задаем набор исходников
set(SOURCES
my_stat_regex_library.h
my_stat_regex_library.cpp

)

# создаем статическую библиотеку
add_library(stat_regex_lib ${SOURCES})

# добавлем путь к исходникам для возожности подключения библиотеки
target_include_directories(stat_regex_lib PUBLIC ${SRC_ROOT_DIR})

# группируем исходники по типу по категориям
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

# В solution эта библиотека лежит в stat_for_regex_project
set_property(TARGET stat_regex_lib PROPERTY FOLDER "stat_for_regex_project")

# включаем в сборку проекnа подпроект с тестами
add_subdirectory(tests)