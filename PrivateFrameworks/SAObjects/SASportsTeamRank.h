/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * position; 
@property (nonatomic,copy) NSNumber * primary; 
@property (nonatomic,copy) NSString * source; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)teamRank;
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)primary;
-(void)setPrimary:(NSNumber *)arg1 ;
-(void)setPosition:(NSNumber *)arg1 ;
-(NSNumber *)position;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

