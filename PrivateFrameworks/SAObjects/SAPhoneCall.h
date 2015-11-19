/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAPersonAttribute, NSNumber;

@interface SAPhoneCall : SADomainCommand

@property (nonatomic,retain) SAPersonAttribute * callRecipient; 
@property (nonatomic,copy) NSNumber * emergencyCall; 
@property (assign,nonatomic) char faceTime; 
@property (assign,nonatomic) char faceTimeAudio; 
@property (assign,nonatomic) char speakerphoneCall; 
+(id)call;
+(id)callWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAPersonAttribute *)callRecipient;
-(void)setCallRecipient:(SAPersonAttribute *)arg1 ;
-(NSNumber *)emergencyCall;
-(void)setEmergencyCall:(NSNumber *)arg1 ;
-(char)faceTime;
-(void)setFaceTime:(char)arg1 ;
-(char)faceTimeAudio;
-(void)setFaceTimeAudio:(char)arg1 ;
-(char)speakerphoneCall;
-(void)setSpeakerphoneCall:(char)arg1 ;
@end

