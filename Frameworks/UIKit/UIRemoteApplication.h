/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIRemoteApplication : NSObject {

	NSString* _machServiceName;
	unsigned _port;

}
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)updatePort;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)statusBarWillChangeOrientation:(int)arg1 duration:(float)arg2 ;
-(void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1 ;
-(void)wakeTimerFired;
-(void)didTakeScreenshot;
@end

