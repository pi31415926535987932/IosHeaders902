/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol CAMModeDialDataSource;
@class NSArray, NSDictionary, UIView, CAGradientLayer;

@interface CAMModeDial : UIControl {

	id<CAMModeDialDataSource> _dataSource;
	int _selectedMode;
	NSArray* __modes;
	NSDictionary* __items;
	UIView* __meshTransformView;
	CAGradientLayer* __maskLayer;
	UIView* __itemsContainerView;

}

@property (assign,nonatomic) id<CAMModeDialDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int selectedMode;                                     //@synthesize selectedMode=_selectedMode - In the implementation block
@property (setter=_setModes:,nonatomic,retain) NSArray * _modes;                   //@synthesize _modes=__modes - In the implementation block
@property (setter=_setItems:,nonatomic,retain) NSDictionary * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,readonly) UIView * _meshTransformView;                        //@synthesize _meshTransformView=__meshTransformView - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * _maskLayer;                       //@synthesize _maskLayer=__maskLayer - In the implementation block
@property (nonatomic,readonly) UIView * _itemsContainerView;                       //@synthesize _itemsContainerView=__itemsContainerView - In the implementation block
+(char)wantsVerticalModeDialForTraitCollection:(id)arg1 ;
-(int)selectedMode;
-(void)setSelectedMode:(int)arg1 animated:(char)arg2 ;
-(void)setSelectedMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<CAMModeDialDataSource>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<CAMModeDialDataSource>)dataSource;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSDictionary *)_items;
-(void)_setItems:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)_configureMeshTransformForTraitCollection:(id)arg1 ;
-(void)_configureMaskForTraitCollection:(id)arg1 ;
-(void)_commonCAMModeDialInitialization;
-(void)_layoutVerticalModeDial;
-(void)_layoutHorizontalModeDial;
-(void)_updateContainerOriginFromSelectedMode;
-(CGSize)_interpolatedHorizontalMeshTransformSize;
-(UIView *)_meshTransformView;
-(CAGradientLayer *)_maskLayer;
-(NSArray *)_modes;
-(UIView *)_itemsContainerView;
-(void)_updateItemsForTraitCollection:(id)arg1 ;
-(id)_selectedItem;
-(float)_centeringNudgeForMode:(int)arg1 ;
-(CGPoint)_verticalContainerOriginForMode:(int)arg1 ;
-(CGPoint)_horizontalContainerOriginForMode:(int)arg1 ;
-(id)_titleForMode:(int)arg1 ;
-(id)_fontForTraitCollection:(id)arg1 ;
-(void)_setModes:(id)arg1 ;
-(id)_verticalMeshTransform;
-(id)_horizontalMeshTransform;
-(id)_meshTransformForTraitCollection:(id)arg1 ;
@end

