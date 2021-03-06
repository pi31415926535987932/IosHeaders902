/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class RadiosPreferences;

@interface MCNetrbManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	char _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)sharedManager;
-(id)init;
-(void)setState:(int)arg1 ;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)authenticate;
-(void)stopService;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)detachMIS;
-(char)didUserPreventData;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
@end

