#include <usearch/index.hpp>
#include <usearch/index_dense.hpp>

#undef NDEBUG
#include <cassert>

using namespace unum::usearch;

int main ()
{
  metric_punned_t metric (3, metric_kind_t::l2sq_k, scalar_kind_t::f32_k);
  index_dense_t index = index_dense_t::make (metric);

  float vec[3] = {0.1f, 0.3f, 0.2f};

  assert (index.try_reserve (10));
  assert (index.add (42, &vec[0]));

  auto results = index.search (&vec[0], 5);
  assert (results.size () == 1);
  assert (results[0].member.key == 42);
  assert (results[0].distance == 0);

  assert (index.size () == 1);
}
