/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSString, GCGamepad, GCExtendedGamepad, GCMotion, NSArray;

@interface GCController : NSObject

@property (nonatomic,copy) id controllerPausedHandler; 
@property (retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,nonatomic,readonly) char attachedToDevice; 
@property (assign,nonatomic) int playerIndex; 
@property (nonatomic,retain,readonly) GCGamepad * gamepad; 
@property (nonatomic,retain,readonly) GCExtendedGamepad * extendedGamepad; 
@property (nonatomic,retain,readonly) GCMotion * motion; 
@property (nonatomic,retain) id<GCNamedProfile> profile; 
@property (nonatomic,readonly) IOHIDDeviceRef deviceRef; 
@property (nonatomic,retain,readonly) NSArray * deviceRefs; 
@property (nonatomic,readonly) unsigned service; 
@property (assign,nonatomic) char* hidReportBuffer; 
+(id)controllers;
+(void)__daemon__appDidEnterBackground;
+(void)__daemon__appWillEnterForeground;
+(void)_startWirelessControllerDiscoveryWithCompanions:(char)arg1 btClassic:(char)arg2 btle:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)__open__;
+(void)__openXPC__;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(void)__daemon__startBonjourService;
+(void)__daemon__setUserActivityUserInfo:(id)arg1 ;
+(void)__daemon__requestConnectedHostUpdatesWithHandler:(/*^block*/id)arg1 ;
+(void)__daemon__addController:(id)arg1 ;
+(void)__daemon__removeController:(id)arg1 ;
+(void)__daemon__controllerWithUDID:(unsigned)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopWirelessControllerDiscovery;
-(id<GCNamedProfile>)profile;
-(GCMotion *)motion;
-(unsigned)deviceHash;
-(char)supportsMotionLite;
-(void)addDeviceRefs:(id)arg1 ;
-(char)isForwarded;
-(id)controllerPausedHandler;
-(void)setPlayerIndex:(int)arg1 ;
-(void)setControllerPausedHandler:(id)arg1 ;
-(char)isAttachedToDevice;
-(int)playerIndex;
-(NSArray *)deviceRefs;
-(char*)hidReportBuffer;
-(void)setHidReportBuffer:(char*)arg1 ;
-(char)isEqualToController:(id)arg1 ;
-(void)removeDeviceRef:(IOHIDDeviceRef)arg1 ;
-(GCGamepad *)gamepad;
-(GCExtendedGamepad *)extendedGamepad;
-(IOHIDDeviceRef)deviceRef;
-(unsigned)sampleRate;
-(unsigned)service;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProfile:(id<GCNamedProfile>)arg1 ;
-(NSString *)vendorName;
@end

