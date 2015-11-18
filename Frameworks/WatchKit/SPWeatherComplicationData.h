/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/SPComplicationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPWeatherComplicationData : SPComplicationData <NSSecureCoding> {

	NSString* _temperatureText;
	NSString* _locationText;
	NSString* _currentConditionsText;
	int _currentConditionsEnum;
	NSString* _highLowText;

}

@property (nonatomic,retain) NSString * temperatureText;                    //@synthesize temperatureText=_temperatureText - In the implementation block
@property (nonatomic,retain) NSString * locationText;                       //@synthesize locationText=_locationText - In the implementation block
@property (nonatomic,retain) NSString * currentConditionsText;              //@synthesize currentConditionsText=_currentConditionsText - In the implementation block
@property (assign,nonatomic) int currentConditionsEnum;                     //@synthesize currentConditionsEnum=_currentConditionsEnum - In the implementation block
@property (nonatomic,retain) NSString * highLowText;                        //@synthesize highLowText=_highLowText - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)temperatureText;
-(void)setTemperatureText:(NSString *)arg1 ;
-(void)setLocationText:(NSString *)arg1 ;
-(NSString *)currentConditionsText;
-(void)setCurrentConditionsText:(NSString *)arg1 ;
-(int)currentConditionsEnum;
-(void)setCurrentConditionsEnum:(int)arg1 ;
-(NSString *)highLowText;
-(void)setHighLowText:(NSString *)arg1 ;
-(NSString *)locationText;
@end

