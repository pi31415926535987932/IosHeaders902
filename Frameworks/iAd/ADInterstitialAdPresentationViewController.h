/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:52:30 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (nonatomic,retain) ADCountdownButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(char)wantsFullScreenLayout;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(ADCountdownButton *)closeButton;
@end

