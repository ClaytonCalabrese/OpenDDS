#ifndef TIME_SERIES_RAW_FORMATTER_HEADER
#define TIME_SERIES_RAW_FORMATTER_HEADER

#include "ParseParameters.h"

#include "BenchTypeSupportImpl.h"

namespace Bench {

class TimeSeriesRawFormatter {
public:
  int format(const Bench::TestController::Report& report, std::ostream& output_stream, const ParseParameters& parse_parameters);
};

} // namespace Bench

#endif
