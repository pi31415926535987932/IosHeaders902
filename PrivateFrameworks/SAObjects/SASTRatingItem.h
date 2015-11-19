/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SASTTemplateRating, NSString;

@interface SASTRatingItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SASTTemplateRating * rating; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ratingItem;
+(id)ratingItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASTTemplateRating *)rating;
-(void)setRating:(SASTTemplateRating *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

