/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * lastResponseId; 
@property (nonatomic,copy) NSString * requestId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)restartRequest;
+(id)restartRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_ad_isRetryableCommand;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)lastResponseId;
-(void)setLastResponseId:(NSString *)arg1 ;
@end

