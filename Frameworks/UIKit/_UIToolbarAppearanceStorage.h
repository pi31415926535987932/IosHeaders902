/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	char _hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;
	UIImage* _shadowImage;
	UIImage* _topShadowImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                         //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * topShadowImage;                      //@synthesize topShadowImage=_topShadowImage - In the implementation block
@property (assign,nonatomic) char hidesShadow;                              //@synthesize hidesShadow=_hidesShadow - In the implementation block
+(int)typicalBarPosition;
-(void)dealloc;
-(UIImage *)backgroundImage;
-(UIImage *)miniBackgroundImage;
-(char)hidesShadow;
-(void)setHidesShadow:(char)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)topShadowImage;
-(UIImage *)topBackgroundImage;
-(UIImage *)miniTopBackgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setMiniBackgroundImage:(UIImage *)arg1 ;
-(void)setTopBackgroundImage:(UIImage *)arg1 ;
-(void)setMiniTopBackgroundImage:(UIImage *)arg1 ;
-(void)setTopShadowImage:(UIImage *)arg1 ;
@end

