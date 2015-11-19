/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSArray, NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSArray* _enabledKeyboards;
	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;
	Class _CKDUITextInputModeClass;

}

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSArray * enabledKeyboards; 
@property (assign,nonatomic) Class CKDUITextInputModeClass;              //@synthesize CKDUITextInputModeClass=_CKDUITextInputModeClass - In the implementation block
+(id)sharedClientInfo;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSArray *)enabledKeyboards;
-(void)setCKDUITextInputModeClass:(Class)arg1 ;
-(void)_inputModeChanged;
-(void)_refreshHostname;
-(Class)CKDUITextInputModeClass;
-(void)_refreshEnabledKeyboards;
-(NSString *)hostname;
@end

