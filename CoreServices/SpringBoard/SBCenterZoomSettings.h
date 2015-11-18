/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconZoomSettings.h>

@interface SBCenterZoomSettings : SBIconZoomSettings {

	float _centerRowCoordinate;
	int _distanceEffect;
	float _firstHopIncrement;
	float _hopIncrementAcceleration;
	float _dockMass;

}

@property (assign) float centerRowCoordinate;                   //@synthesize centerRowCoordinate=_centerRowCoordinate - In the implementation block
@property (assign) int distanceEffect;                          //@synthesize distanceEffect=_distanceEffect - In the implementation block
@property (assign) float firstHopIncrement;                     //@synthesize firstHopIncrement=_firstHopIncrement - In the implementation block
@property (assign) float hopIncrementAcceleration;              //@synthesize hopIncrementAcceleration=_hopIncrementAcceleration - In the implementation block
@property (assign) float dockMass;                              //@synthesize dockMass=_dockMass - In the implementation block
+(id)settingsControllerModule;
-(void)setDockMass:(float)arg1 ;
-(void)setCenterRowCoordinate:(float)arg1 ;
-(float)centerRowCoordinate;
-(int)distanceEffect;
-(void)setDistanceEffect:(int)arg1 ;
-(float)firstHopIncrement;
-(void)setFirstHopIncrement:(float)arg1 ;
-(float)hopIncrementAcceleration;
-(void)setHopIncrementAcceleration:(float)arg1 ;
-(float)dockMass;
-(void)setDefaultValues;
@end

