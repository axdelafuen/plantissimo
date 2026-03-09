add_test([=[HelloTest.BasicAssertions]=]  /home/axlr/zizima/2A/s2/poo-avancee/plantissimo/build/bin/hello_test [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES DEF_SOURCE_LINE /home/axlr/zizima/2A/s2/poo-avancee/plantissimo/test_unit/hello_test.cpp:7 WORKING_DIRECTORY /home/axlr/zizima/2A/s2/poo-avancee/plantissimo/build/test_unit SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  hello_test_TESTS HelloTest.BasicAssertions)
