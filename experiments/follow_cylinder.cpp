#define RL_TOOLS_BACKEND_ENABLE_OPENBLAS
#include <rl_tools/operations/cpu_mux.h>
#include <rl_tools/nn_models/operations_cpu.h>
#include <rl_tools/rl/environments/l2f/multirotor.h>
#include <rl_tools/rl/environments/l2f/operations_cpu.h>


namespace rlt= rl_tools;
using DEVICE=rlt::devices::DEVICE_FACTORY<>;
using RNG= DEVICE::SPEC::RANDOM::ENGINE<>;
using T=float;
using TYPE_POLICY = rlt::numeric_types::Policy<T>;
using TI = typename DEVICE::index_t;




int main(int argc, char** argv)
{

}