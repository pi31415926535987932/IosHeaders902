/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)seasonType;
-(void)setSeasonType:(NSString *)arg1 ;
@end

