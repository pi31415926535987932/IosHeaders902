/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class SAUITemplateAttributedString, SAUIImageResource;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (nonatomic,retain) SAUITemplateAttributedString * attributedText; 
@property (assign,nonatomic) char highlighted; 
@property (nonatomic,retain) SAUIImageResource * image; 
+(id)tabularDataValue;
+(id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setAttributedText:(SAUITemplateAttributedString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setHighlighted:(char)arg1 ;
-(SAUITemplateAttributedString *)attributedText;
-(char)highlighted;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

