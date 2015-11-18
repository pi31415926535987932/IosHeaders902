/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconProgressViewDelegate.h>
#import <SpringBoard/SBReusableView.h>

@class SBIcon, UIImageView, SBIconProgressView, UIImage, NSString;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBReusableView> {

	SBIcon* _icon;
	float _brightness;
	int _location;
	UIImageView* _overlayView;
	SBIconProgressView* _progressView;
	char _isPaused;
	UIImage* _cachedSquareContentsImage;
	char _showsSquareCorners;
	float _overlayAlpha;

}

@property (nonatomic,retain,readonly) SBIcon * icon;                //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) float brightness;                      //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) float overlayAlpha;                    //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (assign,nonatomic) char showsSquareCorners;               //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewMap;
+(unsigned)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
+(id)windowForRecycledViewsInViewMap:(id)arg1 ;
+(void)recycleIconImageView:(id)arg1 ;
+(id)dequeueRecycledIconImageViewOfClass:(Class)arg1 ;
+(float)cornerRadius;
-(void)setOverlayAlpha:(float)arg1 ;
-(float)overlayAlpha;
-(void)setShowsSquareCorners:(char)arg1 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)updateImageAnimated:(char)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(char)arg3 ;
-(id)_generateSquareContentsImage;
-(id)darkeningOverlayImage;
-(void)setProgressAlpha:(float)arg1 ;
-(void)setProgressState:(int)arg1 paused:(char)arg2 percent:(float)arg3 animated:(char)arg4 ;
-(void)_didReceiveLowMemoryWarning:(id)arg1 ;
-(void)_clearCachedImages;
-(void)_updateOverlayImage;
-(void)_updateOverlayAlpha;
-(void)_updateProgressMask;
-(void)_clearProgressView;
-(id)squareContentsImage;
-(id)squareDarkeningOverlayImage;
-(id)_currentOverlayImage;
-(id)_iconBasicOverlayImage;
-(id)_iconSquareOverlayImage;
-(id)_generateIconBasicOverlayImageForFormat:(int)arg1 ;
-(id)_generateIconSquareOverlayImageForFormat:(int)arg1 ;
-(char)showsSquareCorners;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)snapshot;
-(CGRect)visibleBounds;
-(void)prepareForReuse;
-(id)contentsImage;
-(void)setPaused:(char)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(SBIcon *)icon;
@end

