/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * activationAudioAlertDuration; 
@property (nonatomic,copy) NSNumber * activationAudioAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationHapticAlertDuration; 
@property (nonatomic,copy) NSNumber * activationHapticAlertStartTime; 
@property (nonatomic,copy) NSNumber * activationTime; 
@property (nonatomic,copy) NSString * alertType; 
@property (nonatomic,copy) NSNumber * beamFormingStartTime; 
@property (nonatomic,copy) NSNumber * buttonDowntime; 
@property (nonatomic,copy) NSNumber * buttonUpTime; 
@property (assign,nonatomic) char ringerSwitchOff; 
@property (assign,nonatomic) char zeroLatencyLaunch; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordingInfo;
+(id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAlertType:(NSString *)arg1 ;
-(NSString *)alertType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)activationAudioAlertDuration;
-(void)setActivationAudioAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationAudioAlertStartTime;
-(void)setActivationAudioAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertDuration;
-(void)setActivationHapticAlertDuration:(NSNumber *)arg1 ;
-(NSNumber *)activationHapticAlertStartTime;
-(void)setActivationHapticAlertStartTime:(NSNumber *)arg1 ;
-(NSNumber *)activationTime;
-(void)setActivationTime:(NSNumber *)arg1 ;
-(NSNumber *)beamFormingStartTime;
-(void)setBeamFormingStartTime:(NSNumber *)arg1 ;
-(NSNumber *)buttonDowntime;
-(void)setButtonDowntime:(NSNumber *)arg1 ;
-(NSNumber *)buttonUpTime;
-(void)setButtonUpTime:(NSNumber *)arg1 ;
-(char)ringerSwitchOff;
-(void)setRingerSwitchOff:(char)arg1 ;
-(char)zeroLatencyLaunch;
-(void)setZeroLatencyLaunch:(char)arg1 ;
@end

