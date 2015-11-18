/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBProxyRemoteView, SBApplication;

@interface SBSheetView : UIView {

	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	char _wasPresentedAnimated;

}
-(void)noteSheetDidEnd;
-(id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(char)arg3 ;
-(char)wasPresentedAnimated;
-(void)dealloc;
-(id)remoteViewIdentifier;
-(id)application;
@end

