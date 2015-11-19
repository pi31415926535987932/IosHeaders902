/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/companionfindlocallyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoLeash/NFMIDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <companionfindlocallyd/NFMCompanionFindMyController.h>

@class NSTimer, IDSService, AVController, NSString;

@interface NFMCompanionFindLocally : NFMIDSServiceDelegate <IDSServiceDelegate, NFMCompanionFindMyController> {

	char _flashEnabled;
	NSTimer* _flashScheduler;
	int _flashCount;
	IDSService* _gizmoService;
	NSTimer* _alarm;
	AVController* _avController;

}

@property (nonatomic,retain) NSTimer * flashScheduler;                 //@synthesize flashScheduler=_flashScheduler - In the implementation block
@property (assign,nonatomic) int flashCount;                           //@synthesize flashCount=_flashCount - In the implementation block
@property (assign,nonatomic) char flashEnabled;                        //@synthesize flashEnabled=_flashEnabled - In the implementation block
@property (nonatomic,retain) IDSService * gizmoService;                //@synthesize gizmoService=_gizmoService - In the implementation block
@property (nonatomic,retain) NSTimer * alarm;                          //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) AVController * avController;              //@synthesize avController=_avController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAllAlerts:(id)arg1 ;
-(void)playSoundAndFlash:(id)arg1 ;
-(void)setFlashEnabled:(char)arg1 ;
-(char)_isDeviceLocked;
-(char)_isFaceTimeOrCameraFrontmost;
-(char)_isInFaceTimeCall;
-(void)flashLED;
-(void)updateFlashState;
-(void)playbackStateChanged:(id)arg1 ;
-(char)_playFindLocallySound;
-(void)flashLEDIfAppropriate;
-(char)_playSoundAndFlash;
-(IDSService *)gizmoService;
-(NSTimer *)flashScheduler;
-(void)setFlashScheduler:(NSTimer *)arg1 ;
-(int)flashCount;
-(void)setFlashCount:(int)arg1 ;
-(char)flashEnabled;
-(void)setGizmoService:(IDSService *)arg1 ;
-(void)setAlarm:(NSTimer *)arg1 ;
-(NSTimer *)alarm;
-(void)setAvController:(AVController *)arg1 ;
-(AVController *)avController;
-(id)init;
-(void)playSound:(id)arg1 ;
@end

