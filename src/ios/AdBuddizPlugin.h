//Copyright (c) 2014 Sang Ki Kwon (Cranberrygame)
//Email: cranberrygame@yahoo.com
//Homepage: http://cranberrygame.github.io
//License: MIT (http://opensource.org/licenses/MIT)
#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <AdBuddiz/AdBuddiz.h> 

@interface AdBuddizPlugin : CDVPlugin <AdBuddizDelegate>

@property NSString *callbackIdKeepCallback;
//
@property NSString *email;
@property NSString *licenseKey_;
@property BOOL validLicenseKey;
//
@property NSString *publisherKey;
//
@property BOOL fullScreenAdPreload;

- (void) setLicenseKey: (CDVInvokedUrlCommand*)command;
- (void) setUp:(CDVInvokedUrlCommand*)command;
- (void) preloadFullScreenAd: (CDVInvokedUrlCommand*)command;
- (void) showFullScreenAd: (CDVInvokedUrlCommand*)command;

@end