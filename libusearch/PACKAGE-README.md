# libusearch - Approximate nearest neighbors search and clustering C++ library

This is a `build2` package for the [`USearch`](https://github.com/unum-cloud/usearch)
C++ library. It provides a single-header approximate nearest neighbors search
and clustering engine for dense and sparse vectors, built around a graph-based
HNSW index.


## Usage

To start using `libusearch` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libusearch ^2.26.2
```

Then import the library in your `buildfile`:

```
import libs = libusearch%lib{usearch}
```


## Importable targets

This package provides the following importable targets:

```
lib{usearch}
```

A single header-only (binless) library target. Include
`<usearch/index.hpp>` and `<usearch/index_dense.hpp>` to use the
`unum::usearch::index_dense_t` class and its supporting types, or
`<usearch/index.hpp>` alone for the lower-level `unum::usearch::index_gt`
template.


## Configuration variables

This package provides no configuration variables.
