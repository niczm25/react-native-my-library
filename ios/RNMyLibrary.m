
#import "RNMyLibrary.h"
#import <LenddoEFLSdk/LEController.h>
#import <LenddoEFLSdk/LEOnboardingData.h>

@implementation RNMyLibrary

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}
RCT_EXPORT_MODULE();

RCT_EXPORT_METHOD(addEvent:(NSString *)name location:(NSString *)location) {
    RCTLogInfo(@"Pretending to create an event %@ at %@", name, location);
    NSLog(@"Pretending to create an event %@ at %@", name, location);
}

RCT_EXPORT_METHOD(showAuthorize:(NSString *)partnerScriptId applicationId:(NSString *)applicationId) {
    RCTLogInfo(@"Show Authorize %@ with %@", partnerScriptId, applicationId);
    NSLog(@"Show Authorize %@ with %@", partnerScriptId, applicationId);
    
    LEOnboardingData *formData = [[LEOnboardingData alloc] init];
    formData.lastName = @"Mosca";
    formData.firstName = @"Neil";
    formData.email = @"neil.mosca@lenddo.com";
    
    UIViewController *rootViewController = [UIApplication sharedApplication].delegate.window.rootViewController;
    
    [LEController openAuthorize:rootViewController withData:formData withDelegate:self];
}
- (void)onAuthorizeCancelled {
    RCTLogInfo(@"onAuthorizeCancelled");
    NSLog(@"onAuthorizeCancelled");
}

- (void)onAuthorizeComplete {
    RCTLogInfo(@"onAuthorizeComplete");
    NSLog(@"onAuthorizeComplete");
}

- (void)onAuthorizeError:(NSError *)error {
    RCTLogInfo(@"onAuthorizeError");
    NSLog(@"onAuthorizeError");
}

- (void)onAuthorizeStarted {
    RCTLogInfo(@"onAuthorizeStarted");
    NSLog(@"onAuthorizeStarted");
}

@end
  
