# usearch - Approximate nearest neighbors search and clustering C++ library

This is a `build2` package repository for [`usearch`](https://github.com/unum-cloud/usearch),
an approximate nearest neighbors search and clustering C++ library.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`usearch` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libusearch/PACKAGE-README.md) file.

The development setup for `usearch` uses the standard `bdep`-based workflow.
For example:

```
git clone .../usearch.git
cd usearch

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
