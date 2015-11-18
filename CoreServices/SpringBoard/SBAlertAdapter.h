/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@class UIViewController;

@interface SBAlertAdapter : SBAlert {

	UIViewController* _effectiveViewController;

}
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)effectiveViewController;
-(void)alertWindow:(id)arg1 resizedFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(id)display;
-(char)shouldAutorotate;
-(void)setView:(id)arg1 ;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithViewController:(id)arg1 ;
-(void)setDisplay:(id)arg1 ;
@end

