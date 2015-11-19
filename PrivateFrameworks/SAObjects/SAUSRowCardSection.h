/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUSCardSection.h>

@class SAUIImageResource, NSString;

@interface SAUSRowCardSection : SAUSCardSection

@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) char imageIsRightAligned; 
@property (nonatomic,copy) NSString * leftText; 
@property (nonatomic,copy) NSString * rightText; 
+(id)rowCardSection;
+(id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)leftText;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(char)imageIsRightAligned;
-(void)setImageIsRightAligned:(char)arg1 ;
@end

