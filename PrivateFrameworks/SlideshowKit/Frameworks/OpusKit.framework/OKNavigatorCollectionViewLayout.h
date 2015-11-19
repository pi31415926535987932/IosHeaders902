/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKNavigatorCollectionViewController, NSIndexPath, UIPanGestureRecognizer, NSString;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	OKNavigatorCollectionViewController* _collectionViewController;
	unsigned _transitionStyle;
	NSIndexPath* _sourceItemIndexPath;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGRect _oldBounds;

}

@property (assign,nonatomic) OKNavigatorCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) unsigned transitionStyle;                                                    //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceItemIndexPath;                                           //@synthesize sourceItemIndexPath=_sourceItemIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePanGesture:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)transitionStyle;
-(void)setTransitionStyle:(unsigned)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(OKNavigatorCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(OKNavigatorCollectionViewController *)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setSourceItemIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)sourceItemIndexPath;
-(id)itemClosestToCenter;
@end

