/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBIconWallpaperColorClient.h>

@protocol SBIconBlurryBackgroundViewObserver;
@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperColorClient> {

	CGRect _wallpaperRelativeBounds;
	char _isBlurring;
	char _suppressesExternalUpdates;
	id<SBIconBlurryBackgroundViewObserver> _observer;
	/*^block*/id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;

}

@property (assign,nonatomic) id<SBIconBlurryBackgroundViewObserver> observer;                                 //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeCenter;                                                 //@synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter - In the implementation block
@property (nonatomic,readonly) char isBlurring;                                                               //@synthesize isBlurring=_isBlurring - In the implementation block
@property (nonatomic,copy) id wantsBlurEvaluator;                                                             //@synthesize wantsBlurEvaluator=_wantsBlurEvaluator - In the implementation block
@property (assign,getter=isSuppressingExternalUpdates,nonatomic) char suppressesExternalUpdates;              //@synthesize suppressesExternalUpdates=_suppressesExternalUpdates - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesExternalUpdates:(char)arg1 ;
-(void)setWantsBlurEvaluator:(id)arg1 ;
-(CGRect)wallpaperRelativeBounds;
-(char)wantsBlur:(id)arg1 ;
-(void)setWallpaperColor:(CGColorRef)arg1 phase:(CGSize)arg2 ;
-(void)setBlurring:(char)arg1 ;
-(char)isBlurring;
-(CGPoint)wallpaperRelativeCenter;
-(id)wantsBlurEvaluator;
-(char)isSuppressingExternalUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(id<SBIconBlurryBackgroundViewObserver>)observer;
-(void)setObserver:(id<SBIconBlurryBackgroundViewObserver>)arg1 ;
@end

