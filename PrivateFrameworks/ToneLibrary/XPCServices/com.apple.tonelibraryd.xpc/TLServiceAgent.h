/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/XPCServices/com.apple.tonelibraryd.xpc/com.apple.tonelibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TLServiceAgentInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface TLServiceAgent : NSObject <TLServiceAgentInterface, NSXPCListenerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_connection:(id)arg1 hasEntitlement:(id)arg2 ;
-(char)_connectionHasTonePreferencesReadAccessEntitlement:(id)arg1 ;
-(char)_connectionHasTonePreferencesWriteAccessEntitlement:(id)arg1 ;
-(char)_ensureDirectoryContainingUserGeneratedVibrationStoreFileExistsWithError:(id*)arg1 ;
-(void)_performBlockAffectingUserGeneratedVibrationPatterns:(/*^block*/id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_postUserGeneratedVibrationPatternsDidChangeNotification;
-(char)_connectionHasUserGeneratedVibrationPatternsReadAccessEntitlement:(id)arg1 ;
-(char)_connectionHasUserGeneratedVibrationPatternsWriteAccessEntitlement:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)retrieveCurrentTonePreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentToneIdentifier:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)retrieveUserGeneratedVibrationPatternsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUserGeneratedVibrationPatterns:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAllUserGeneratedVibrationPatternsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

