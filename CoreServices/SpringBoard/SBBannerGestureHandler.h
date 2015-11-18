/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBBannerGestureHandlerDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBBannerContainerViewController, SBBannerController, SBBannerContextView;

@interface SBBannerGestureHandler : NSObject {

	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController* _bannerViewController;
	SBBannerController* _bannerController;

}

@property (assign,nonatomic) id<SBBannerGestureHandlerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) SBBannerContextView * bannerView; 
@property (nonatomic,retain,readonly) SBBannerContainerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,readonly) SBBannerController * bannerController;                                      //@synthesize bannerController=_bannerController - In the implementation block
+(id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
+(id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerController *)bannerController;
-(char)handleGestureType:(int)arg1 state:(int)arg2 location:(CGPoint)arg3 displacement:(float)arg4 velocity:(float)arg5 ;
-(id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerContainerViewController *)bannerViewController;
-(SBBannerContextView *)bannerView;
-(void)setDelegate:(id<SBBannerGestureHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBBannerGestureHandlerDelegate>)delegate;
-(void)invalidate;
@end

