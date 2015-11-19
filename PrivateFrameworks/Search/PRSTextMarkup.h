/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSTextMarkup
@property (nonatomic,retain) NSString * text; 
@property (assign) char emphasized; 
@property (assign) char bold; 
@property (nonatomic,retain) PRSImage * inlineGlyph; 
@required
-(void)setEmphasized:(char)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(char)bold;
-(void)setBold:(char)arg1;
-(void)setInlineGlyph:(id)arg1;
-(char)emphasized;
-(PRSImage *)inlineGlyph;

@end

