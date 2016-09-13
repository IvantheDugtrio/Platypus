![Build Status](https://travis-ci.org/IvantheDugtrio/Platypus.svg?branch=master)

The Platypus variant caller. To build Platypus, do the following:

git submodule update --recursive --init
make

Then to run do

python bin/Platypus.py --bamFiles=BAM.bam --refFile=REF.fa --output=variants.vcf

Platypus has been tested with Python 2.6 and 2.7, and requires Cython 0.20.2 or later
to build.

For OSX:

    export C_INCLUDE_PATH=/path/to/dir/include
    export LIBRARY_PATH=/path/to/dir/lib (only for making)
    export DYLD_FALLBACK_LIBRARY_PATH=/path/to/dir/lib
