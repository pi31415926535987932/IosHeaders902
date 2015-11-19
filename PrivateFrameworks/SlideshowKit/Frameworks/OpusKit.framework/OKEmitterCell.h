/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <QuartzCore/CAEmitterCell.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSURL, NSString;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {

	NSURL* _contentURL;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)parentLoaded:(id)arg1 ;
-(float)settingAlphaRange;
-(void)setSettingAlphaRange:(float)arg1 ;
-(float)settingAlphaSpeed;
-(void)setSettingAlphaSpeed:(float)arg1 ;
-(float)settingBirthRate;
-(void)setSettingBirthRate:(float)arg1 ;
-(float)settingBlueRange;
-(void)setSettingBlueRange:(float)arg1 ;
-(float)settingBlueSpeed;
-(void)setSettingBlueSpeed:(float)arg1 ;
-(id)settingColor;
-(void)setSettingColor:(id)arg1 ;
-(id)settingContents;
-(void)setSettingContents:(id)arg1 ;
-(CGRect)settingContentsRect;
-(void)setSettingContentsRect:(CGRect)arg1 ;
-(float)settingEmissionLatitude;
-(void)setSettingEmissionLatitude:(float)arg1 ;
-(float)settingEmissionLongitude;
-(void)setSettingEmissionLongitude:(float)arg1 ;
-(float)settingEmissionRange;
-(void)setSettingEmissionRange:(float)arg1 ;
-(id)settingEmitterCells;
-(void)setSettingEmitterCells:(id)arg1 ;
-(char)settingEnabled;
-(void)setSettingEnabled:(char)arg1 ;
-(float)settingGreenRange;
-(void)setSettingGreenRange:(float)arg1 ;
-(float)settingGreenSpeed;
-(void)setSettingGreenSpeed:(float)arg1 ;
-(float)settingLifetime;
-(void)setSettingLifetime:(float)arg1 ;
-(float)settingLifetimeRange;
-(void)setSettingLifetimeRange:(float)arg1 ;
-(id)settingMagnificationFilter;
-(void)setSettingMagnificationFilter:(id)arg1 ;
-(id)settingMinificationFilter;
-(void)setSettingMinificationFilter:(id)arg1 ;
-(float)settingMinificationFilterBias;
-(void)setSettingMinificationFilterBias:(float)arg1 ;
-(id)settingName;
-(void)setSettingName:(id)arg1 ;
-(float)settingRedRange;
-(void)setSettingRedRange:(float)arg1 ;
-(float)settingRedSpeed;
-(void)setSettingRedSpeed:(float)arg1 ;
-(float)settingScale;
-(void)setSettingScale:(float)arg1 ;
-(float)settingScaleRange;
-(void)setSettingScaleRange:(float)arg1 ;
-(float)settingScaleSpeed;
-(void)setSettingScaleSpeed:(float)arg1 ;
-(float)settingSpin;
-(void)setSettingSpin:(float)arg1 ;
-(float)settingSpinRange;
-(void)setSettingSpinRange:(float)arg1 ;
-(id)settingStyle;
-(void)setSettingStyle:(id)arg1 ;
-(float)settingVelocity;
-(void)setSettingVelocity:(float)arg1 ;
-(float)settingVelocityRange;
-(void)setSettingVelocityRange:(float)arg1 ;
-(float)settingXAcceleration;
-(void)setSettingXAcceleration:(float)arg1 ;
-(float)settingYAcceleration;
-(void)setSettingYAcceleration:(float)arg1 ;
-(float)settingZAcceleration;
-(void)setSettingZAcceleration:(float)arg1 ;
@end

