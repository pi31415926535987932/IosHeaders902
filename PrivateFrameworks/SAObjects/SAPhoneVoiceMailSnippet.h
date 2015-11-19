/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * autoPlay; 
@property (nonatomic,copy) NSArray * calls; 
@property (nonatomic,copy) NSArray * playVoiceMailCommands; 
@property (nonatomic,retain) id<SAClientBoundCommand> postPlayCommand; 
+(id)voiceMailSnippet;
+(id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
-(NSNumber *)autoPlay;
-(void)setAutoPlay:(NSNumber *)arg1 ;
-(NSArray *)playVoiceMailCommands;
-(void)setPlayVoiceMailCommands:(NSArray *)arg1 ;
-(id<SAClientBoundCommand>)postPlayCommand;
-(void)setPostPlayCommand:(id<SAClientBoundCommand>)arg1 ;
@end
