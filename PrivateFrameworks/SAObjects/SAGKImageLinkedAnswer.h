/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSNumber, SAUIImageResource, NSArray;

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSArray * thumbnails; 
+(id)imageLinkedAnswer;
+(id)imageLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
-(NSArray *)thumbnails;
-(void)setThumbnails:(NSArray *)arg1 ;
@end

