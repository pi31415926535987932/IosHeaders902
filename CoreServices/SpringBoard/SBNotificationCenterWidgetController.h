/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCWidgetController_Host_IPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface SBNotificationCenterWidgetController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultWidgetController;
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)arg1 ;
+(char)isInternalWidgetBundleIdentifier:(id)arg1 ;
+(id)containingBundleProxyForWidgetWithBundleIdentifer:(id)arg1 ;
-(void)__setHasContent:(char)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

