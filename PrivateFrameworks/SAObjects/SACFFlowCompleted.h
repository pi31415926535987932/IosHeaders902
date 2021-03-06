/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)successResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)failureResponseWithAceId:(id)arg1 logs:(id)arg2 ;
+(id)clientFlowCompletedWithRefId:(id)arg1 status:(int)arg2 context:(id)arg3 contextVersion:(id)arg4 logs:(id)arg5 ;
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SACFProvideContext *)updateContext;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
@end

