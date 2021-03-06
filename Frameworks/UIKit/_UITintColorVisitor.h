/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned _reasons;
	char _visitedViewIsWindow;
	char _viewHasDefinedTintColor;
	char _viewHasNonAutomaticTintAdjustmentMode;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(id)initWithNotificationReasons:(unsigned)arg1 ;
-(id)initWithTraversalDirection:(unsigned)arg1 ;
-(char)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(char)_visitView:(id)arg1 ;
-(void)_prepareForView:(id)arg1 trackingHierarchy:(char)arg2 ;
@end

