/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImageView, UIColor, UIImage;

@interface _UISiriTrackingItem : NSObject {

	char _deleted;
	char _isABigReplacement;
	char _isASmallReplacement;
	char _isAnIntroduction;
	UIImageView* _animatedView;
	UIColor* _textColor;
	float _offscreenXLocation;
	/*^block*/id _animationCompletionHandler;
	UIImage* _capturedGlyphImage;
	NSRange _textRange;
	NSRange _glyphRange;
	CGRect _targetFrame;

}

@property (nonatomic,retain) UIImageView * animatedView;                //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) NSRange textRange;                         //@synthesize textRange=_textRange - In the implementation block
@property (assign,nonatomic) NSRange glyphRange;                        //@synthesize glyphRange=_glyphRange - In the implementation block
@property (assign,nonatomic) float offscreenXLocation;                  //@synthesize offscreenXLocation=_offscreenXLocation - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                        //@synthesize targetFrame=_targetFrame - In the implementation block
@property (nonatomic,copy) id animationCompletionHandler;               //@synthesize animationCompletionHandler=_animationCompletionHandler - In the implementation block
@property (assign,nonatomic) char isABigReplacement;                    //@synthesize isABigReplacement=_isABigReplacement - In the implementation block
@property (assign,nonatomic) char isASmallReplacement;                  //@synthesize isASmallReplacement=_isASmallReplacement - In the implementation block
@property (assign,nonatomic) char isAnIntroduction;                     //@synthesize isAnIntroduction=_isAnIntroduction - In the implementation block
@property (nonatomic,retain) UIImage * capturedGlyphImage;              //@synthesize capturedGlyphImage=_capturedGlyphImage - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UIColor *)textColor;
-(void)setCapturedGlyphImage:(UIImage *)arg1 ;
-(void)setTargetFrame:(CGRect)arg1 ;
-(void)animateOut;
-(void)captureGlyphsInRect:(CGRect)arg1 containerOrigin:(CGPoint)arg2 fromLayoutManager:(id)arg3 ;
-(UIImageView *)animatedView;
-(void)setAnimatedView:(UIImageView *)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(NSRange)glyphRange;
-(void)setGlyphRange:(NSRange)arg1 ;
-(float)offscreenXLocation;
-(void)setOffscreenXLocation:(float)arg1 ;
-(CGRect)targetFrame;
-(id)animationCompletionHandler;
-(void)setAnimationCompletionHandler:(id)arg1 ;
-(char)isABigReplacement;
-(void)setIsABigReplacement:(char)arg1 ;
-(char)isASmallReplacement;
-(void)setIsASmallReplacement:(char)arg1 ;
-(char)isAnIntroduction;
-(void)setIsAnIntroduction:(char)arg1 ;
-(UIImage *)capturedGlyphImage;
@end

