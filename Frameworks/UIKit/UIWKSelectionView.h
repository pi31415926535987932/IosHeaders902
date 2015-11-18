/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebSelectionView.h>

@protocol UIWKInteractionViewProtocol;
@class UIView, UIWebSelectionHandle;

@interface UIWKSelectionView : UIWebSelectionView {

	UIView*<UIWKInteractionViewProtocol> _interactionView;
	UIWebSelectionHandle* _handle;
	char _selectionIsBlock;
	char _thresholdIsValid;
	char _usingGesture;
	CGPoint _lastTouchPoint;

}
-(void)updateSelectionRects;
-(void)selectionChanged;
-(CGRect)visibleRect;
-(id)initWithView:(id)arg1 ;
-(void)clearSelection;
-(void)showControls;
-(id)scroller;
-(id)selectionRects;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)resetSelection;
-(void)updateFrameAndHandlesWithAnimation:(char)arg1 ;
-(id)tintView;
-(char)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(char)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(char)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(char)arg1 ;
-(void)setHandleCenters;
-(CGRect)fetchSelectionBoundingRect;
-(char)shouldExpandForActiveHandle;
-(char)shouldContractForActiveHandle;
-(void)switchToTextModeForHandle:(id)arg1 ;
-(char)shouldSwitchToBlockModeForHandle:(id)arg1 ;
-(char)isHorizontalWritingMode;
-(void)touchChanged:(id)arg1 forHandle:(id)arg2 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(void)setSelectionMode:(char)arg1 ;
-(void)selectionCreationStartedWithPoint:(CGPoint)arg1 ;
-(void)selectionCreationUpdatedWithPoint:(CGPoint)arg1 ;
-(void)selectionCreationEndedWithPoint:(CGPoint)arg1 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(int)arg2 withFlags:(int)arg3 ;
-(void)blockSelectionChangedWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(float)arg3 shrinkThreshold:(float)arg4 ;
-(CGRect)unobscuredRect;
-(void)switchToBlockModeForHandle:(id)arg1 withPoint:(CGPoint)arg2 ;
-(float)handleOffsetForPoint:(CGPoint)arg1 handlePosition:(int)arg2 ;
-(void)updateRangedSelectionData;
@end

