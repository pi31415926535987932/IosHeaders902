/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKGradientReferenceView;
@class UIView, NSArray;

@interface CKGradientView : UIView {

	UIView*<CKGradientReferenceView> _referenceView;
	NSArray* _colors;
	UIView* _effectView;
	CGRect _gradientFrame;

}

@property (assign,nonatomic) UIView*<CKGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                            //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                         //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                        //@synthesize gradientFrame=_gradientFrame - In the implementation block
+(id)gradientViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)description;
-(void)didMoveToSuperview;
-(void)_removeAllAnimations:(char)arg1 ;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(NSArray *)colors;
-(id)gradient;
-(UIView*<CKGradientReferenceView>)referenceView;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(CGRect)gradientFrame;
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)updateAnimation;
-(void)updateGradientImage;
@end

