/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPUFontDescriptor, MPUTextDrawingCache, NSMutableArray, UIColor, NSString, NSSet, UIImage;

@interface MusicEntityViewContentTextDescriptor : NSObject <NSCopying> {

	MPUFontDescriptor* _fontDescriptor;
	float _maximumHeight;
	char _needsTextAttributesUpdate;
	float _scaledFirstBaselineOffset;
	float _tallestFontAscender;
	float _tallestFontBodyLeading;
	float _tallestFontCapHeight;
	float _tallestFontDescender;
	MPUTextDrawingCache* _textDrawingCache;
	NSMutableArray* _controlTargetActions;
	char _textColorFollowsTintColor;
	char _useTextFallbackForEmptyString;
	char _shouldBaselineAlignTrailingAccessoryImage;
	int _backdropOverlayBlendMode;
	UIColor* _backgroundColor;
	float _defaultFirstBaselineOffset;
	float _lineHeightMultiple;
	float _lineSpacing;
	int _lineBreakMode;
	int _maximumNumberOfLines;
	int _maximumTextLengthForInput;
	int _textAlignment;
	UIColor* _textColor;
	UIColor* _tintColor;
	NSString* _textPlaceholder;
	UIColor* _textPlaceholderColor;
	float _displayScale;
	NSString* _textValueProperty;
	NSString* _textValueFallbackLocalizationKey;
	/*^block*/id _textProvider;
	NSSet* _textProviderAdditionalPropertiesToPrefetch;
	/*^block*/id _attributedTextProvider;
	UIImage* _trailingAccessoryImage;
	int _tag;
	UIOffset _trailingAccessoryOffset;

}

@property (assign,nonatomic) int backdropOverlayBlendMode;                                  //@synthesize backdropOverlayBlendMode=_backdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float defaultFirstBaselineOffset;                              //@synthesize defaultFirstBaselineOffset=_defaultFirstBaselineOffset - In the implementation block
@property (assign,nonatomic) float lineHeightMultiple;                                      //@synthesize lineHeightMultiple=_lineHeightMultiple - In the implementation block
@property (assign,nonatomic) float lineSpacing;                                             //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,copy) MPUFontDescriptor * fontDescriptor; 
@property (assign,nonatomic) int lineBreakMode;                                             //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) int maximumNumberOfLines;                                      //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) int maximumTextLengthForInput;                                 //@synthesize maximumTextLengthForInput=_maximumTextLengthForInput - In the implementation block
@property (assign,nonatomic) int textAlignment;                                             //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) char textColorFollowsTintColor;                                //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                           //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * textPlaceholder;                                      //@synthesize textPlaceholder=_textPlaceholder - In the implementation block
@property (nonatomic,retain) UIColor * textPlaceholderColor;                                //@synthesize textPlaceholderColor=_textPlaceholderColor - In the implementation block
@property (assign,nonatomic) float displayScale;                                            //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,copy) NSString * textValueProperty;                                    //@synthesize textValueProperty=_textValueProperty - In the implementation block
@property (nonatomic,copy) NSString * textValueFallbackLocalizationKey;                     //@synthesize textValueFallbackLocalizationKey=_textValueFallbackLocalizationKey - In the implementation block
@property (assign,nonatomic) char useTextFallbackForEmptyString;                            //@synthesize useTextFallbackForEmptyString=_useTextFallbackForEmptyString - In the implementation block
@property (nonatomic,copy) id textProvider;                                                 //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) NSSet * textProviderAdditionalPropertiesToPrefetch;              //@synthesize textProviderAdditionalPropertiesToPrefetch=_textProviderAdditionalPropertiesToPrefetch - In the implementation block
@property (nonatomic,copy) id attributedTextProvider;                                       //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
@property (nonatomic,readonly) char hasControlBehaviors; 
@property (nonatomic,readonly) unsigned allControlEvents; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (assign,nonatomic) char shouldBaselineAlignTrailingAccessoryImage;                //@synthesize shouldBaselineAlignTrailingAccessoryImage=_shouldBaselineAlignTrailingAccessoryImage - In the implementation block
@property (nonatomic,retain) UIImage * trailingAccessoryImage;                              //@synthesize trailingAccessoryImage=_trailingAccessoryImage - In the implementation block
@property (assign,nonatomic) UIOffset trailingAccessoryOffset;                              //@synthesize trailingAccessoryOffset=_trailingAccessoryOffset - In the implementation block
@property (nonatomic,readonly) MPUTextDrawingCache * textDrawingCache; 
@property (nonatomic,readonly) float maximumHeight; 
@property (nonatomic,readonly) float scaledFirstBaselineOffset; 
@property (nonatomic,readonly) float tallestFontAscender; 
@property (nonatomic,readonly) float tallestFontBodyLeading; 
@property (nonatomic,readonly) float tallestFontCapHeight; 
@property (nonatomic,readonly) float tallestFontDescender; 
@property (assign,nonatomic) int tag;                                                       //@synthesize tag=_tag - In the implementation block
-(float)maximumHeight;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setTextAlignment:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setMaximumNumberOfLines:(int)arg1 ;
-(float)displayScale;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(NSSet *)allTargets;
-(unsigned)allControlEvents;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned)arg2 ;
-(UIColor *)textColor;
-(int)textAlignment;
-(int)lineBreakMode;
-(float)lineSpacing;
-(void)setLineSpacing:(float)arg1 ;
-(MPUFontDescriptor *)fontDescriptor;
-(int)maximumNumberOfLines;
-(float)scaledFirstBaselineOffset;
-(float)tallestFontAscender;
-(float)tallestFontBodyLeading;
-(id)textForEntityValueProvider:(id)arg1 ;
-(MPUTextDrawingCache *)textDrawingCache;
-(char)hasControlBehaviors;
-(void)setFontDescriptor:(MPUFontDescriptor *)arg1 ;
-(void)setTextValueProperty:(NSString *)arg1 ;
-(void)setUseTextFallbackForEmptyString:(char)arg1 ;
-(void)setTextValueFallbackLocalizationKey:(NSString *)arg1 ;
-(void)setBackdropOverlayBlendMode:(int)arg1 ;
-(void)setTextProvider:(id)arg1 ;
-(void)setTextProviderAdditionalPropertiesToPrefetch:(NSSet *)arg1 ;
-(UIImage *)trailingAccessoryImage;
-(char)shouldBaselineAlignTrailingAccessoryImage;
-(void)setShouldBaselineAlignTrailingAccessoryImage:(char)arg1 ;
-(UIOffset)trailingAccessoryOffset;
-(float)tallestFontScaledValueForValue:(float)arg1 ;
-(void)setTrailingAccessoryOffset:(UIOffset)arg1 ;
-(float)tallestFontDescender;
-(float)tallestFontCapHeight;
-(void)setDefaultFirstBaselineOffset:(float)arg1 ;
-(void)setTrailingAccessoryImage:(UIImage *)arg1 ;
-(void)setTextPlaceholderColor:(UIColor *)arg1 ;
-(void)setTextPlaceholder:(NSString *)arg1 ;
-(void)setMaximumTextLengthForInput:(int)arg1 ;
-(NSString *)textValueProperty;
-(NSSet *)textProviderAdditionalPropertiesToPrefetch;
-(void)updateForPreferredContentSizeChange;
-(id)_tallestFont;
-(void)_updateTextAttributes;
-(int)backdropOverlayBlendMode;
-(float)defaultFirstBaselineOffset;
-(float)lineHeightMultiple;
-(int)maximumTextLengthForInput;
-(NSString *)textPlaceholder;
-(UIColor *)textPlaceholderColor;
-(NSString *)textValueFallbackLocalizationKey;
-(char)useTextFallbackForEmptyString;
-(id)textProvider;
-(id)attributedTextProvider;
-(void)setAttributedTextProvider:(id)arg1 ;
-(void)setLineHeightMultiple:(float)arg1 ;
-(void)setTextColorFollowsTintColor:(char)arg1 ;
-(void)setDisplayScale:(float)arg1 ;
-(char)textColorFollowsTintColor;
@end

