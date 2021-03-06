//
//  LogSubmit.h
//  Signal
//
//  Created by Frederic Jacobs on 02/07/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import <CocoaLumberjack/DDFileLogger.h>

@interface Pastelog : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, UIAlertViewDelegate>

typedef void (^successBlock)(NSError *error, NSString *urlString);

+(void)reportErrorAndSubmitLogsWithAlertTitle:(NSString*)alertTitle alertBody:(NSString*)alertBody;
+(void)reportErrorAndSubmitLogsWithAlertTitle:(NSString*)alertTitle alertBody:(NSString*)alertBody completionBlock:(successBlock)block;

+(void)submitLogs;
+(void)submitLogsWithCompletion:(successBlock)block;
+(void)submitLogsWithCompletion:(successBlock)block forFileLogger:(DDFileLogger*)fileLogger;

@end
