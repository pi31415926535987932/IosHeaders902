/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	char _bouncesSetExplicitly;
	UIWebBrowserView* _browserView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBounces:(char)arg1 ;
-(void)setBouncesHorizontally:(char)arg1 ;
-(void)setBouncesVertically:(char)arg1 ;
-(void)_weaklySetBouncesHorizontally:(char)arg1 ;
-(void)_setWebView:(id)arg1 ;
@end

