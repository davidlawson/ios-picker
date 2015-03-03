//
//  FPMacros.h
//  FPPicker
//
//  Created by Ruben Nine on 12/06/14.
//  Copyright (c) 2014 Filepicker.io. All rights reserved.
//

#include "../../../Crashlytics.framework/Headers/Crashlytics.h"

#define FPCLAMP(x, minimum, maximum) \
    MIN((maximum), MAX((minimum), (x)))

#ifdef DEBUG

#define NSForceLog CLS_LOG
#define DLog CLS_LOG
#define DTrace(fmt, ...) \
    NSLog((@"TRACE %s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ## __VA_ARGS__);

#else

#define NSForceLog CLS_LOG
#define DLog CLS_LOG
#define DTrace(...)

#endif
