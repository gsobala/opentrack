// generates export.hpp for each module from compat/linkage.hpp

#pragma once

#include "compat/linkage-macros.hpp"

#ifdef BUILD_VIDEO_OPENCV
#   define OTR_VIDEO_OPENCV_EXPORT OTR_GENERIC_EXPORT
#else
#   define OTR_VIDEO_OPENCV_EXPORT OTR_GENERIC_IMPORT
#endif
