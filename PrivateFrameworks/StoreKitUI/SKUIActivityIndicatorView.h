/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIImageView, UIActivityIndicatorView, NSString;

@interface SKUIActivityIndicatorView : SKUIViewReuseView <SKUIViewElementView> {

	unsigned _alignment;
	char _animating;
	UIEdgeInsets _contentInset;
	UIImageView* _imageView;
	UIActivityIndicatorView* _indicatorView;
	double _period;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringWithLabel:(id)arg1 context:(id)arg2 ;
+(CGSize)_activityIndicatorSize;
-(void)setHidden:(char)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(char)_isAnimating;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_updateSpinnerAnimation;
@end
