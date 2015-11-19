/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>
#import <UIKit/UIKeyInput.h>

@class UIColor, UIFont, NSMutableArray, NSMutableString, SKUIViewElement, NSString;

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {

	UIColor* _boxBackgroundColor;
	UIColor* _boxBorderColor;
	UIFont* _font;
	int _keyboardType;
	NSMutableArray* _labels;
	char _needsLabelReload;
	int _numberOfCharacters;
	char _secureTextEntry;
	NSMutableString* _text;
	UIColor* _textColor;
	SKUIViewElement* _viewElement;

}

@property (nonatomic,copy) UIColor * boxBackgroundColor;                                 //@synthesize boxBackgroundColor=_boxBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * boxBorderColor;                                     //@synthesize boxBorderColor=_boxBorderColor - In the implementation block
@property (nonatomic,copy) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) int numberOfCharacters;                                     //@synthesize numberOfCharacters=_numberOfCharacters - In the implementation block
@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType;                                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(float)_defaultBoxSizeForFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setSecureTextEntry:(char)arg1 ;
-(char)isSecureTextEntry;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_reloadLabelSubviews;
-(void)_setNeedsReloadLayout;
-(void)setBoxBackgroundColor:(UIColor *)arg1 ;
-(void)setBoxBorderColor:(UIColor *)arg1 ;
-(void)setNumberOfCharacters:(int)arg1 ;
-(void)_sendValueChangeEvents;
-(UIColor *)boxBackgroundColor;
-(UIColor *)boxBorderColor;
-(int)numberOfCharacters;
@end

