/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) int mediaItemType; 
@property (assign,nonatomic) char shouldShuffle; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)shouldShuffle;
-(void)setShouldShuffle:(char)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
@end

