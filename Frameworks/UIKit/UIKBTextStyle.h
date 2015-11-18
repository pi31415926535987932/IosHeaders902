/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying> {

	char _ignoreTextMarginOnKey;
	NSString* _fontName;
	float _fontSize;
	float _minFontSize;
	float _kerning;
	float _textOpacity;
	NSString* _textColor;
	NSString* _etchColor;
	float _pathWeight;
	float _fontWeight;
	int _selector;
	CGPoint _textOffset;
	CGPoint _etchOffset;

}

@property (nonatomic,retain) NSString * fontName;                     //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) float fontSize;                          //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) float minFontSize;                       //@synthesize minFontSize=_minFontSize - In the implementation block
@property (assign,nonatomic) float kerning;                           //@synthesize kerning=_kerning - In the implementation block
@property (assign,nonatomic) float textOpacity;                       //@synthesize textOpacity=_textOpacity - In the implementation block
@property (nonatomic,retain) NSString * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * etchColor;                    //@synthesize etchColor=_etchColor - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                      //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) CGPoint etchOffset;                      //@synthesize etchOffset=_etchOffset - In the implementation block
@property (assign,nonatomic) float pathWeight;                        //@synthesize pathWeight=_pathWeight - In the implementation block
@property (assign,nonatomic) float fontWeight;                        //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) int selector;                            //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) char ignoreTextMarginOnKey;              //@synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey - In the implementation block
+(id)styleWithFontName:(id)arg1 withFontSize:(float)arg2 ;
+(id)styleWithTextColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setSelector:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(NSString *)arg1 ;
-(int)selector;
-(NSString *)textColor;
-(NSString *)fontName;
-(void)setMinFontSize:(float)arg1 ;
-(float)minFontSize;
-(void)setFontSize:(float)arg1 ;
-(void)setTextOffset:(CGPoint)arg1 ;
-(void)setIgnoreTextMarginOnKey:(char)arg1 ;
-(void)setPathWeight:(float)arg1 ;
-(CGPoint)textOffset;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontWeight:(float)arg1 ;
-(void)setKerning:(float)arg1 ;
-(void)setTextOpacity:(float)arg1 ;
-(float)fontSize;
-(float)fontWeight;
-(float)kerning;
-(float)textOpacity;
-(NSString *)etchColor;
-(CGPoint)etchOffset;
-(float)pathWeight;
-(char)ignoreTextMarginOnKey;
-(void)setEtchColor:(NSString *)arg1 ;
-(void)setEtchOffset:(CGPoint)arg1 ;
-(void)overlayWithStyle:(id)arg1 ;
@end
