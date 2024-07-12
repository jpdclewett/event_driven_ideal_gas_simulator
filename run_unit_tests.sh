#!/bin/bash
set -e

cmake -B build_unit_tests -DTESTING=On
make -C build_unit_tests

# run the tests.
# ctest will execute all binaries that have been built by cmake using
# the enable_testing() and add_test() commands.

pushd build_unit_tests >/dev/null
ctest --output-on-failure
popd >/dev/null
