#include <gtest/gtest.h>
#include "my_stat_regex_library.h"

TEST(my_stat_regex_test, test_for_vowles)
{
    std::string file_name = "C:\\GitHub\\GitCpp\\task1.7\\files_for_test\\test_vowles.txt";
    
    int values = mystat::stat_vowels(file_name);

    ASSERT_EQ(values,31);
}

TEST(my_stat_regex_test, test_for_oneword)
{
    std::string file_name = "C:\\GitHub\\GitCpp\\task1.7\\files_for_test\\test_oneword.txt";
    
    int values = mystat::one_letter_word(file_name);

    ASSERT_EQ(values,22);
}

TEST(my_stat_regex_test, test_exceptetion_for_read_non_existent_file)
{
    std::string file_name = "C:\\GitHub\\GitCpp\\task1.7\\files_for_test\\d.txt";

    try
    {
        int values = mystat::stat_vowels(file_name);
    }
    catch (const std::exception & ex)
    {
        ASSERT_EQ(std::string(ex.what()), "File cannot be opened: iostream stream error");
    }
}

TEST(my_stat_regex_test, test_exceptetion_for_read_non_existent_file_second)
{
    std::string file_name = "C:\\GitHub\\GitCpp\\task1.7\\files_for_test\\daa.txt";

    try
    {
        int values = mystat::one_letter_word(file_name);
    }
    catch (const std::exception & ex)
    {
        ASSERT_EQ(std::string(ex.what()), "File cannot be opened: iostream stream error");
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}