/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class UIView;

@interface UIGobblerGestureRecognizer : UIGestureRecognizer {

	UIView* _excludedView;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 excludedView:(id)arg3 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
@end

