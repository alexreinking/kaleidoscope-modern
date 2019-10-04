//#include "runtime_internal.h"

namespace Halide {
namespace Runtime {
namespace Internal {

__attribute__((always_inline, weak)) int halide_malloc_alignment() {
    return 128;
}

}}}
