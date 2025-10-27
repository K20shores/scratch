#include <pybind11/pybind11.h>
using namespace pybind11;

PYBIND11_MODULE(test, m) {
    m.def("add", [](int a, int b){ return a + b; });
}
