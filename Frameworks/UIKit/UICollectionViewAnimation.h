/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionReusableView, UICollectionViewLayoutAttributes, NSMutableArray;

@interface UICollectionViewAnimation : NSObject {

	UICollectionReusableView* _view;
	UICollectionViewLayoutAttributes* _finalLayoutAttributes;
	float _startFraction;
	float _endFraction;
	int _viewType;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _startupHandlers;
	/*^block*/id _animationBlock;
	struct {
		unsigned animateFromCurrentPosition : 1;
		unsigned deleteAfterAnimation : 1;
		unsigned rasterizeAfterAnimation : 1;
		unsigned resetRasterizationAfterAnimation : 1;
		unsigned updateZIndexAfterAnimation : 1;
	}  _collectionViewAnimationFlags;
	char _updateZIndexAfterAnimation;

}

@property (nonatomic,readonly) UICollectionReusableView * view;                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) int viewType;                                                          //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * finalLayoutAttributes;              //@synthesize finalLayoutAttributes=_finalLayoutAttributes - In the implementation block
@property (nonatomic,readonly) float startFraction;                                                   //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) float endFraction;                                                     //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) char animateFromCurrentPosition; 
@property (nonatomic,readonly) char deleteAfterAnimation; 
@property (nonatomic,readonly) char updateZIndexAfterAnimation;                                       //@synthesize updateZIndexAfterAnimation=_updateZIndexAfterAnimation - In the implementation block
@property (assign,nonatomic) char rasterizeAfterAnimation; 
@property (assign,nonatomic) char resetRasterizationAfterAnimation; 
-(id)description;
-(UICollectionReusableView *)view;
-(void)start;
-(float)startFraction;
-(float)endFraction;
-(char)animateFromCurrentPosition;
-(int)viewType;
-(id)initWithView:(id)arg1 viewType:(int)arg2 finalLayoutAttributes:(id)arg3 startFraction:(float)arg4 endFraction:(float)arg5 animateFromCurrentPostion:(char)arg6 deleteAfterAnimation:(char)arg7 customAnimations:(/*^block*/id)arg8 ;
-(char)deleteAfterAnimation;
-(void)setRasterizeAfterAnimation:(char)arg1 ;
-(char)rasterizeAfterAnimation;
-(void)setResetRasterizationAfterAnimation:(char)arg1 ;
-(char)resetRasterizationAfterAnimation;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)addStartupHandler:(/*^block*/id)arg1 ;
-(UICollectionViewLayoutAttributes *)finalLayoutAttributes;
-(char)updateZIndexAfterAnimation;
@end

