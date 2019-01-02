
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#if __has_include("RCTLog.h")
#import "RCTLog.h"
#else
#import <React/RCTLog.h>
#endif

#import <LenddoEFLSdk/LEAuthorizeEventDelegate.h>
#import <LenddoEFLSdk/LEController.h>
#import <LenddoEFLSdk/LEOnboardingData.h>

@interface RNMyLibrary : NSObject <RCTBridgeModule, LEAuthorizeEventDelegate>

@end
  
