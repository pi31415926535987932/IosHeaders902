/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {

	int _interfaceOrientation;
	char _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(char)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(int)arg1 ;
-(void)commonInit;
@end

