/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class NSMutableArray, UIDelayedAction, UIView, _UIScreenEdgePanRecognizer;

@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow {

	NSMutableArray* _failureMessageLabels;
	UIDelayedAction* _messageFadeAction;
	UIView* _backgroundView;
	_UIScreenEdgePanRecognizer* _recognizer;
	long _maximumVisibleOverlayItems;

}

@property (assign,nonatomic) _UIScreenEdgePanRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) long maximumVisibleOverlayItems;                      //@synthesize maximumVisibleOverlayItems=_maximumVisibleOverlayItems - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(char)_isWindowServerHostingManaged;
-(void)dismissMessages;
-(void)fadeOldestMessage;
-(void)pushMessage:(id)arg1 toVisualOverlay:(char)arg2 ;
-(void)pushFailureMessage:(id)arg1 toVisualOverlay:(char)arg2 ;
-(void)pushStatusMessage:(id)arg1 toVisualOverlay:(char)arg2 ;
-(_UIScreenEdgePanRecognizer *)recognizer;
-(void)setRecognizer:(_UIScreenEdgePanRecognizer *)arg1 ;
-(long)maximumVisibleOverlayItems;
-(void)setMaximumVisibleOverlayItems:(long)arg1 ;
@end

