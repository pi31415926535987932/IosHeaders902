/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class NSDate, ABLECoreDuetController, ABLEGradient, NSDictionary, NSArray, NSMutableArray;

@interface ABLEGradientModelController : ABLEModelController {

	char expires;
	char enabled;
	NSDate* expiryDate;
	unsigned _currentBON;
	unsigned _currentShortBON;
	float _lastGradient;
	float _lastShortGradient;
	ABLECoreDuetController* _coreDuetController;
	ABLEGradient* _gradient;
	NSDictionary* _configuration;
	NSArray* _lastData;
	NSMutableArray* _lastShortData;
	NSDate* _lastDate;
	double historyPeriodRequired;
	double lifetime;
	double recurrence;

}

@property (assign) unsigned currentBON;                                        //@synthesize currentBON=_currentBON - In the implementation block
@property (readonly) unsigned currentShortBON;                                 //@synthesize currentShortBON=_currentShortBON - In the implementation block
@property (readonly) float lastGradient;                                       //@synthesize lastGradient=_lastGradient - In the implementation block
@property (readonly) float lastShortGradient;                                  //@synthesize lastShortGradient=_lastShortGradient - In the implementation block
@property (assign) double historyPeriodRequired; 
@property (retain) NSDate * expiryDate; 
@property (readonly) ABLECoreDuetController * coreDuetController;              //@synthesize coreDuetController=_coreDuetController - In the implementation block
@property (assign) char enabled; 
@property (readonly) ABLEGradient * gradient;                                  //@synthesize gradient=_gradient - In the implementation block
@property (readonly) double lifetime; 
@property (readonly) double recurrence; 
@property (retain) NSDictionary * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSArray * lastData;                                         //@synthesize lastData=_lastData - In the implementation block
@property (retain) NSMutableArray * lastShortData;                             //@synthesize lastShortData=_lastShortData - In the implementation block
@property (retain) NSDate * lastDate;                                          //@synthesize lastDate=_lastDate - In the implementation block
-(id)initWithCoreDuetController:(id)arg1 ;
-(void)resetModel;
-(ABLECoreDuetController *)coreDuetController;
-(char)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned)currentBON;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(char)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(char)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(void)setHistoryPeriodRequired:(double)arg1 ;
-(NSMutableArray *)lastShortData;
-(void)calculateShortGradientBONForDate:(id)arg1 ;
-(id)getBatteryDataForDate:(id)arg1 asTable:(char)arg2 ;
-(void)calculateShortGradientBONForDate:(id)arg1 chargeLevel:(float)arg2 ;
-(double)historyPeriodRequired;
-(unsigned)currentShortBON;
-(float)lastGradient;
-(float)lastShortGradient;
-(void)setCurrentBON:(unsigned)arg1 ;
-(void)setLastShortData:(NSMutableArray *)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(NSDate *)expiryDate;
-(char)enabled;
-(id)currentState;
-(void)setEnabled:(char)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(char)valid;
-(ABLEGradient *)gradient;
-(NSArray *)lastData;
-(void)setLastData:(NSArray *)arg1 ;
-(char)expires;
-(id)defaultConfiguration;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)lastDate;
-(void)setLastDate:(NSDate *)arg1 ;
-(double)recurrence;
-(double)lifetime;
@end

