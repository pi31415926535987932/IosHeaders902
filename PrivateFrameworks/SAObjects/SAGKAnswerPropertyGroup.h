/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAGKAnswerPropertyGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * answerProperties; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerPropertyGroup;
+(id)answerPropertyGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)answerProperties;
-(void)setAnswerProperties:(NSArray *)arg1 ;
@end
