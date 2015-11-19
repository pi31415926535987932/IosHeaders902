/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController, ISPaneFrameView, UIVisualEffectView, NSLayoutConstraint;

@interface SlidingPaneViewState : NSObject {

	char _shouldNotifyOfPaneSizeChanges;
	UIViewController* _paneViewController;
	ISPaneFrameView* _paneView;
	UIVisualEffectView* _visualEffectView;
	NSLayoutConstraint* _paneVerticalPositionConstraint;
	NSLayoutConstraint* _paneHorizontalPositionConstraint;
	unsigned _edge;

}

@property (nonatomic,retain) UIViewController * paneViewController;                              //@synthesize paneViewController=_paneViewController - In the implementation block
@property (nonatomic,retain) ISPaneFrameView * paneView;                                         //@synthesize paneView=_paneView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paneVerticalPositionConstraint;                //@synthesize paneVerticalPositionConstraint=_paneVerticalPositionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paneHorizontalPositionConstraint;              //@synthesize paneHorizontalPositionConstraint=_paneHorizontalPositionConstraint - In the implementation block
@property (assign,nonatomic) char shouldNotifyOfPaneSizeChanges;                                 //@synthesize shouldNotifyOfPaneSizeChanges=_shouldNotifyOfPaneSizeChanges - In the implementation block
@property (assign,nonatomic) unsigned edge;                                                      //@synthesize edge=_edge - In the implementation block
-(void)dealloc;
-(void)setEdge:(unsigned)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setPaneViewController:(UIViewController *)arg1 ;
-(ISPaneFrameView *)paneView;
-(id)initWithViewController:(id)arg1 edge:(unsigned)arg2 ;
-(UIViewController *)paneViewController;
-(void)setPaneView:(ISPaneFrameView *)arg1 ;
-(NSLayoutConstraint *)paneVerticalPositionConstraint;
-(void)setPaneVerticalPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paneHorizontalPositionConstraint;
-(void)setPaneHorizontalPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(char)shouldNotifyOfPaneSizeChanges;
-(void)setShouldNotifyOfPaneSizeChanges:(char)arg1 ;
-(unsigned)edge;
@end

