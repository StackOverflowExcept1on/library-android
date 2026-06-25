#include <ucontext.h>

static_assert(offsetof(ucontext_t, uc_flags) == 0);
static_assert(offsetof(ucontext_t, uc_link) == 8);
static_assert(offsetof(ucontext_t, uc_stack) == 16);
static_assert(offsetof(ucontext_t, uc_sigmask) == 40);
static_assert(offsetof(ucontext_t, uc_mcontext) == 176);

static_assert(sizeof(ucontext_t) == 4560);
