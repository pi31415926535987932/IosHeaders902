/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface BCBatteryView : UIView {

	UIImageView* _shellImageView;
	UIImageView* _highCapacityFillImageView;
	UIImageView* _lowCapacityFillImageView;
	unsigned _percentCharge;
	unsigned _lowCharge;

}

@property (assign,nonatomic) unsigned percentCharge;              //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,nonatomic) unsigned lowCharge;                  //@synthesize lowCharge=_lowCharge - In the implementation block
+(id)chargeGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)percentCharge;
-(void)setPercentCharge:(unsigned)arg1 ;
-(id)_batteryColorForLowCapacity:(char)arg1 ;
-(void)_setPercentCharge:(unsigned)arg1 force:(char)arg2 ;
-(UIEdgeInsets)_edgeInsetsForBatteryInsidesForScale:(float)arg1 ;
-(void)setLowCharge:(unsigned)arg1 ;
-(unsigned)lowCharge;
@end

