/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIControl.h>

@class NSString, UIImageView, UIView, NSMutableArray;

@interface SBNotificationsClearButton : UIControl {

	NSString* _title;
	UIImageView* _circleImageView;
	UIImageView* _xImageView;
	UIImageView* _compositeCircleXImageView;
	UIView* _highlightView;
	NSMutableArray* _glyphImageViews;
	unsigned _animatingTransitionCount;
	int _graphicsQuality;
	int _clearButtonState;

}

@property (nonatomic,readonly) int graphicsQuality;               //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (nonatomic,readonly) int clearButtonState;              //@synthesize clearButtonState=_clearButtonState - In the implementation block
+(id)_circleImageWithGraphicsQuality:(int)arg1 ;
+(id)_xImageWithGraphicsQuality:(int)arg1 ;
+(id)compositeCircleXImageWithGraphicsQuality:(int)arg1 ;
-(id)initWithTitle:(id)arg1 graphicsQuality:(int)arg2 ;
-(int)clearButtonState;
-(id)_circleImage;
-(id)compositeCircleXImage;
-(id)_glyphImagesFromAttributedString:(id)arg1 ;
-(CGRect)_circleFrameForState:(int)arg1 ;
-(CGRect)_xFrameWithCircleFrame:(CGRect)arg1 forState:(int)arg2 ;
-(CGRect)_unrolledCircleBounds;
-(CGRect)_circleBoundsForState:(int)arg1 ;
-(id)_glyphFramesWithCircleFrame:(CGRect)arg1 forState:(int)arg2 ;
-(void)_layoutSubviewsForState:(int)arg1 ;
-(id)_lazyHighlightView;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)graphicsQuality;
-(void)setHighlighted:(char)arg1 ;
-(id)_xImage;
-(void)setState:(int)arg1 animated:(char)arg2 ;
@end

