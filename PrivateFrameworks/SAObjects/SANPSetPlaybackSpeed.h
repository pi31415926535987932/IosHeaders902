/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (assign,nonatomic) double scalingFactor; 
+(id)setPlaybackSpeed;
+(id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setScalingFactor:(double)arg1 ;
-(double)scalingFactor;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
@end

