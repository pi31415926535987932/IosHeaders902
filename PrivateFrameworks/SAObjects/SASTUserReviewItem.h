/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviewDate; 
@property (nonatomic,retain) SAUIDecoratedText * reviewText; 
@property (nonatomic,retain) SAUIDecoratedText * reviewer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userReviewItem;
+(id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setReviewText:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewer;
-(void)setReviewer:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)reviewDate;
-(void)setReviewDate:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewText;
@end

