/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, NSArray;

@interface SKUIInteractiveSegmentedControl : UIControl {

	NSMutableArray* _dividerViews;
	/*^block*/id _dividerCreationBlock;
	float _dividerWidth;
	NSArray* _segments;
	float _selectionProgress;

}

@property (nonatomic,copy) id dividerCreationBlock;                //@synthesize dividerCreationBlock=_dividerCreationBlock - In the implementation block
@property (assign,nonatomic) float dividerWidth;                   //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (nonatomic,copy) NSArray * segments;                     //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) float selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectionProgress:(float)arg1 ;
-(void)setDividerCreationBlock:(id)arg1 ;
-(void)setDividerWidth:(float)arg1 ;
-(NSArray *)segments;
-(float)selectionProgress;
-(void)setSegments:(NSArray *)arg1 ;
-(void)_unregisterForObservationOfSegment:(id)arg1 ;
-(id)_createDividerViewWithFrame:(CGRect)arg1 ;
-(int)selectedSegmentIndexForSelectionProgress:(float)arg1 ;
-(float)relativeSelectionProgressForSelectionProgress:(float)arg1 segmentIndex:(int)arg2 ;
-(void)_registerForObservationOfSegment:(id)arg1 ;
-(float)selectionProgressForRelativeSectionProgress:(float)arg1 segmentIndex:(int)arg2 ;
-(char)_setSelectionProgress:(float)arg1 ;
-(void)_applySelectionProgressToSegments;
-(void)_notifyClientsOfSelectionProgressChange;
-(float)selectionProgressForSelectedSegmentAtIndex:(int)arg1 ;
-(void)_segmentControlTouchUpInsideAction:(id)arg1 ;
-(id)dividerCreationBlock;
-(float)dividerWidth;
@end
