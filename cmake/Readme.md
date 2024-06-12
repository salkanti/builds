# CTest
1. Execution of tests and collection of results
2. Tests are defined in CMake configuration files
3. Ctest run test, reports results and handle test dependencies

## Requirements
1. run 
    all :  ctest
    matching pattern : ctest --tests-regex <pattern>
    include tests from specified directory
    exclude tests from specified directory
2. cancel
    cancel running tests - process management tools by os, interrupt ctrl+c
3. rerun
    rerun only failed tests :  ctest --rerun-failed
    rerun specific set of test 
         ctest -R "<TestName>|<TestName>"
         ctest -R "<TestPattern>"
         
    rerun tests from a specified directory
4. redirect test output to log file

## Ctest options

1. 
3. ctest --rerun-failed : rerun only failed tests
4. ctest --parallel <level> : run tests in parallel
5. 


## Limitations

## TBD
1. Labels
2. --label-regex
3. --label-exclude
