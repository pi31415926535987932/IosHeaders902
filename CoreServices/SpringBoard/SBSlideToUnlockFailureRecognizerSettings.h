/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings {

	char _enabled;
	char _viewDebugArea;
	unsigned _maxAllowableVerticalOffset;
	float _topAngle;
	float _bottomAngle;

}

@property (assign,nonatomic) char enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char viewDebugArea;                               //@synthesize viewDebugArea=_viewDebugArea - In the implementation block
@property (assign,nonatomic) unsigned maxAllowableVerticalOffset;              //@synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset - In the implementation block
@property (assign,nonatomic) float topAngle;                                   //@synthesize topAngle=_topAngle - In the implementation block
@property (assign,nonatomic) float bottomAngle;                                //@synthesize bottomAngle=_bottomAngle - In the implementation block
+(id)settingsControllerModule;
-(void)setViewDebugArea:(char)arg1 ;
-(void)setMaxAllowableVerticalOffset:(unsigned)arg1 ;
-(void)setTopAngle:(float)arg1 ;
-(void)setBottomAngle:(float)arg1 ;
-(char)viewDebugArea;
-(unsigned)maxAllowableVerticalOffset;
-(float)topAngle;
-(float)bottomAngle;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)setDefaultValues;
@end

