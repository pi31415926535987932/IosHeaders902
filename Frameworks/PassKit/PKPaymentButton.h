/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, UIView, UILabel, PKPDFView, CAFilter, PKShapeView;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	int _style;
	int _type;
	UIView* _container;
	UILabel* _buyLabel;
	PKPDFView* _pdfView;
	CAFilter* _highlightFilter;
	char _highlighted;
	CGSize _boundsSize;
	PKShapeView* _maskView;

}
+(id)buttonWithType:(int)arg1 style:(int)arg2 ;
+(Class)layerClass;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(int)arg1 paymentButtonStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
@end

