/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialComment;
+(id)socialCommentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)date;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
@end

