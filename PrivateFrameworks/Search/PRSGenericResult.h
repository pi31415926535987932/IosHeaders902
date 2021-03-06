/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, PRSImage, NSString, NSURL;


@protocol PRSGenericResult <PRSBaseResult>
@property (nonatomic,retain) NSArray * descriptions; 
@property (nonatomic,retain) PRSImage * thumbnail; 
@property (assign,nonatomic) char thumbnail_crop_circle; 
@property (assign,nonatomic) int title_maxlines; 
@property (nonatomic,retain) NSString * secondary_title; 
@property (assign,nonatomic) char secondary_title_detached; 
@property (assign,nonatomic) char thumbnail_align_right; 
@property (nonatomic,retain) PRSImage * secondary_image; 
@property (nonatomic,retain) NSString * footnote; 
@property (nonatomic,retain) id<PRSAuxiliaryInfo> auxiliary_info; 
@property (nonatomic,retain) id<PRSActionButton> action_button; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSURL * card_url; 
@property (nonatomic,retain) NSArray * card_sections; 
@property (nonatomic,retain) NSArray * row_sections; 
@optional
-(NSString *)footnote;
-(PRSImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)setThumbnail_crop_circle:(char)arg1;
-(void)setTitle_maxlines:(int)arg1;
-(void)setSecondary_title:(id)arg1;
-(void)setSecondary_title_detached:(char)arg1;
-(void)setThumbnail_align_right:(char)arg1;
-(void)setSecondary_image:(id)arg1;
-(void)setAuxiliary_info:(id)arg1;
-(void)setAction_button:(id)arg1;
-(void)setCard_title:(id)arg1;
-(void)setCard_url:(id)arg1;
-(void)setCard_sections:(id)arg1;
-(void)setRow_sections:(id)arg1;
-(void)setFootnote:(id)arg1;
-(NSArray *)descriptions;
-(void)setDescriptions:(id)arg1;
-(NSString *)card_title;
-(NSArray *)card_sections;
-(id<PRSActionButton>)action_button;
-(NSURL *)card_url;
-(NSArray *)row_sections;
-(NSString *)secondary_title;
-(char)secondary_title_detached;
-(PRSImage *)secondary_image;
-(int)title_maxlines;
-(char)thumbnail_crop_circle;
-(char)thumbnail_align_right;
-(id<PRSAuxiliaryInfo>)auxiliary_info;

@end

