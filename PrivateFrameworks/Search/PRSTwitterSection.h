/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage, NSArray;


@protocol PRSTwitterSection <PRSSection>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * thumbnail; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) PRSImage * title_glyph; 
@property (nonatomic,retain) NSArray * formatted_text; 
@property (nonatomic,retain) NSString * formatted_text_delimiter; 
@property (nonatomic,copy) NSString * date; 
@property (nonatomic,copy) NSString * footnote; 
@optional
-(NSString *)footnote;
-(void)setImage:(id)arg1;
-(NSString *)date;
-(PRSImage *)image;
-(NSString *)subtitle;
-(void)setDate:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(PRSImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)setTitle_glyph:(id)arg1;
-(void)setFormatted_text:(id)arg1;
-(void)setFormatted_text_delimiter:(id)arg1;
-(void)setFootnote:(id)arg1;
-(NSArray *)formatted_text;
-(NSString *)formatted_text_delimiter;
-(PRSImage *)title_glyph;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;

@end

