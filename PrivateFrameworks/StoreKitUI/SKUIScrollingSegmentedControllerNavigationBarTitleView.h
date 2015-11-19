/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIScrollingSegmentedController;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView {

	CGSize _lastMeasuredNavigationBarTitleViewSizeBeforeCurrentCommit;
	SKUIScrollingSegmentedController* _owningController;

}

@property (assign,nonatomic,__weak) SKUIScrollingSegmentedController * owningController;              //@synthesize owningController=_owningController - In the implementation block
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)setOwningController:(SKUIScrollingSegmentedController *)arg1 ;
-(CGSize)_navigationBarTitleViewSizeWithDesiredValue:(CGSize)arg1 originalValue:(CGSize)arg2 ;
-(SKUIScrollingSegmentedController *)owningController;
@end

