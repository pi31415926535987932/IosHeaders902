/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderListObject.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSString, NSURL;

@interface SAReminderListObjectWrapper : SAReminderListObject <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)listObjectWrapper;
+(id)listObjectWrapperWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)generation;
-(id)encodedClassName;
-(void)setGeneration:(NSNumber *)arg1 ;
@end

