/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSString;

@interface DCPreferences : NSUserDefaults

@property (assign,nonatomic) char traceLogsEnabled; 
@property (nonatomic,retain) NSString * logLevel; 
@property (assign,nonatomic) char xmlPropertyLists; 
@property (nonatomic,retain) NSString * currentDataVersionNumber; 
+(id)preferences;
-(NSString *)logLevel;
-(void)setLogLevel:(NSString *)arg1 ;
-(char)traceLogsEnabled;
-(void)clearAuthCookieAndTrustedCertDataForService:(id)arg1 ;
-(NSString *)currentDataVersionNumber;
-(void)setCurrentDataVersionNumber:(NSString *)arg1 ;
-(void)clearAllAuthCookiesAndTrustedCertData;
-(char)xmlPropertyLists;
-(void)_postDidChangeNotification;
-(id)_authCookieKeyForService:(id)arg1 ;
-(id)_trustedCertDataKeyForService:(id)arg1 ;
-(void)setTraceLogsEnabled:(char)arg1 ;
-(id)authCookieForService:(id)arg1 ;
-(id)trustedCertDataForService:(id)arg1 ;
-(void)setAuthCookie:(id)arg1 andTrustedCertData:(id)arg2 forService:(id)arg3 ;
-(void)setXmlPropertyLists:(char)arg1 ;
@end

