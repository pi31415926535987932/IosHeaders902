/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSThread.h>

@class NSMutableArray, NSMutableDictionary;

@interface UIStatusBarServerThread : NSThread {

	NSMutableArray* _clientPorts;
	NSMutableArray* _publishers;
	SCD_Struct_UI70 _statusBarData;
	SCD_Struct_UI70 _composedStatusBarData;
	SCD_Struct_UI71 _overrides;
	CFDictionaryRef _doubleHeightStatusStrings;
	CFDictionaryRef _glowAnimationStates;
	NSMutableDictionary* _glowAnimationEndTimes;
	char _composedStatusBarDataValid;

}
-(id)_publisherForPort:(unsigned)arg1 ;
-(void)_broadcastStatusBarDataWithActions:(int)arg1 ;
-(void)_broadcastStyleOverrides;
-(SCD_Struct_UI70*)_statusBarData;
-(int)_styleOverrides;
-(void)_setAnimationEndTimesForOverrides:(int)arg1 ;
-(void)_removeAnimationEndTimesForOverrides:(int)arg1 ;
-(double)_glowAnimationEndTimeForStyle:(int)arg1 ;
-(void)main;
-(void)_addClient:(unsigned)arg1 ;
-(void)_removeClient:(CFMachPortRef)arg1 ;
-(void)_removePublisher:(CFMachPortRef)arg1 ;
-(SCD_Struct_UI71*)_statusBarOverrideData;
-(void)_postStatusBarData:(SCD_Struct_UI70*)arg1 actions:(int)arg2 ;
-(void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(char)_glowAnimationStateForStyle:(int)arg1 ;
-(void)_postGlowAnimationState:(char)arg1 forStyle:(int)arg2 ;
-(id)_doubleHeightStatusStringForStyle:(int)arg1 ;
-(void)_postDoubleHeightStatus:(char*)arg1 forStyle:(int)arg2 ;
-(void)_postStatusBarOverrideData:(SCD_Struct_UI71*)arg1 ;
-(char)_permanentizeStatusBarOverrideData;
-(void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
@end

