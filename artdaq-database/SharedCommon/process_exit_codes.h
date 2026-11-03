#ifndef ARTDAQ_DATABASE_ARTDAQ_DATABASE_SHAREDCOMMON_PROCESS_EXIT_CODES_H_
#define ARTDAQ_DATABASE_ARTDAQ_DATABASE_SHAREDCOMMON_PROCESS_EXIT_CODES_H_

namespace process_exit_code {
constexpr int INVALID_ARGUMENT = 128;
constexpr int UNCAUGHT_EXCEPTION = 144;
constexpr int SUCCESS = 0;
constexpr int FAILURE = 1;
constexpr int HELP = 1;
}  // namespace process_exit_code

namespace trace_mode {
constexpr auto modeM = 1LL;

#ifndef NDEBUG
constexpr auto modeS = 0LL;
#else
constexpr auto modeS = 0LL;
#endif
}  // namespace trace_mode

#endif  // ARTDAQ_DATABASE_ARTDAQ_DATABASE_SHAREDCOMMON_PROCESS_EXIT_CODES_H_
