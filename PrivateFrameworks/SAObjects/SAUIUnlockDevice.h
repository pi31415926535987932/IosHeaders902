/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * cancellationCommands; 
@property (nonatomic,copy) NSArray * failureCommands; 
@property (nonatomic,copy) NSArray * successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)_afui_usefulUserResultType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)cancellationCommands;
-(void)setCancellationCommands:(NSArray *)arg1 ;
-(NSArray *)failureCommands;
-(void)setFailureCommands:(NSArray *)arg1 ;
-(NSArray *)successCommands;
-(void)setSuccessCommands:(NSArray *)arg1 ;
@end

